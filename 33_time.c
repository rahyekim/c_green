#include <stdio.h>
#include <time.h>
#include <locale.h> //setlocale() 함수 사용을 위한 헤더
#include <windows.h>
#include <stdlib.h>

//cpu 실행 시간 측정을 위한 가상의 작업함수 

void do_heavy_work(){
    long volatile i;
    for(i=0 ; i<500000000 ; i++){}//시간지연을 위한 빈루프

}
int main(){

    //한글깨짐 방지
    setlocale(LC_ALL,".UTF8");
    //맥이나 리눅스는 이게 필요없지만 window 한글을 쓸때 콘솔창 인코딩 utf-8로 바꿈
    system("chcp 65001 > nul");
    printf("한글 테스트\n");

    // #include <windows.h> + SetConsoleOutputCP(CP_UTF8);

    //현재시간 가져오기(time_t)
    time_t now;
    time(&now);
    
    printf("1. ctime()사용: %s", ctime(&now));

    //2.시간을 구조체로 변환하기(struct tm)
    struct tm *local_t = localtime(&now);
    printf("2. asctime(지역시간) 사용: %s", asctime(local_t));
    struct tm *uct_t = gmtime(&now);
    printf("2. gmtime(UTC시간) 사용: %s", asctime(uct_t));
    
    //다시 지역시간으로 되돌림
    local_t = localtime(&now);

    //3.내입맛대로 시간포멧팅(strftime)
    char time_str[100];
    strftime(time_str,sizeof(time_str),"%Y년 %m월 %d일 %초", local_t );
    //시간계산
    struct tm target_time= *local_t;
    target_time.tm_mday+=1;

    time_t tomorrow = mktime(&target_time);

    double diff= difftime(tomorrow, now);

    printf("5.difftime() 사용: 지금부터 내일이시간까지는 %.0f초 남았습니다", diff);

    //5.프로그램실행 시간측정
    printf("\n 무거운작업을 시작합니다....\n");

    clock_t start_tick= clock();
    do_heavy_work();

    clock_t end_tick=clock();

    double cpu_time_used= ((double) (end_tick -start_tick))/ CLOCKS_PER_SEC;

    printf("6.clock()사용 : 작업에 소요된 CPU시간은 %f초 입니다\n", cpu_time_used);

    return 0;
}

/*
time(): 현재시간을 가져옴 time_t(1970년 1월1일 이후의 흐른 초단위 정수 )
clock(): 프로그램 실행후 소비된 CPU클럭수 clock_t(소요시간 측정용)
localtime(): time_t를 시스템의 지역시간으로 변환... 
struct tm*(연,월,일 등이 분리된 구조체 포인터)
gmtime(): time_t를 협정세계시로(UTC)로 변환 struct tm*
mktime(): struct tm을 다시 time_t로 변환 time_t(시간을 조작한다음 갱신)
difftime(): 두시간(time_t)의 차이를 계산=>double(초단위 차이반환)
ctime(): time_t를 바로 영어 문자열로 변환
asctime(): strunct tm을 영어 문자열로 ㄹ변환 char*
strftime(): strunct tm을 원하는 형식의 문자열로 변환
*/