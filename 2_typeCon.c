#include <stdio.h>

//한글안꺠지게하려면
#include <windows.h>

//8,16,32,64 비트부호있는 없는 정수
#include  <stdint.h>

int main (){

    //명시적변환 수동
    float q= 9;
    printf("%f\t", q);

    int w = 9.88; 
    printf("%d\t", w); //9

    float sum = (float)5 /2 ; //2.00000 정수끼리계산 소수점버림 -> (float)5=> 5.0 ->2.5
    printf("%f\t", sum); //   7자리 정도 정확도

    //실전관련 테스트
    int total = 289; int count =4 ;    
    double avg = (double) total/count;   //15자리 정도 정확도   289.0 /4
    printf("%.2f\n", avg);

    int adc =1500; 
    double voltage= (double) adc * 3.3 /4095;
    printf( "%0.3fV\n" , voltage);

    //8비트짜리 데이터를 다루는 센서 값을 저장할때 아주 유용
    uint8_t sensorValue = 255; //0~255까지(작은숫자)만 저장가능 
    int32_t counter= 100000; //32비트정수(4바이트) 큰숫자

    printf("센서값 : %u\n", sensorValue);
    printf("카운터 : %u\n", counter); //u=> d?

    //네트워크 패킷 바이트 배열을 자주 다룹니다
    uint8_t packet[4]= {0x12, 0x34, 0x56, 0x78};
    
    /*
    uint8_t 는 1바이트(8비트) 4개니까 총 4바이트가 나열
    메모리에는 1바이트씩 차례대로 저장...
    */
   //비트이동(shift)와 결합OR의 원리
   //각 1바이트 데이터를 32비트 공간안에서 제자리로 찾아가게 만든뒤 |(or)연산으로 합치는과정
   
    uint32_t value = 
    ((uint32_t)packet[0] << 24) |  //0x12를 왼쪽으로 24ㅂㅣ트(3바이트를 밈)
    ((uint32_t)packet[1] << 16) |  //0x34를 왼쪽으로 16ㅂㅣ트(2바이트를 밈)
    ((uint32_t)packet[2] << 8) |  //0x56를 왼쪽으로 8ㅂㅣ트(1바이트를 밈)
    ((uint32_t)packet[3] );  //이동하지않고 그래로둠
    
    printf("0x%X\n", value);
    
    //파일크기계산 
    long fileSize = 5242880; //파일크기를 바이트 단위로 ... 5x1024x1024
    double mb= (double) fileSize / (1024 * 1024 );
    printf("%.2f MB\n", mb) ;
    /* 
    10진수 0-9
    2진수 0 1
    그래서 저장단위도 2의 거듭제곱 기준으로 사용
    2 10제곱 = 1024
    1KB = 1024bytes
    1MB = 1024 kb
    1GB = 1024 MB
    
    */


SetConsoleOutputCP(CP_UTF8);

char typeCasting[] = "c의 형변환은 변수나 값의 자료형을 다른자료형으로 바꾸는 것" 
"실무에서는 데이터베이스 네트워크 통신, 센서데이터파일입출력, 메모리제어 모든분야사용됨"
"형변환이 필요한 이유: 예를들어 5를 2로 나누면 정수에서 소수점"
"이런사유로 크게 두가지로 나뉨"
"암시적변환[자동: implicit Conversion] 컴파일러가 자동으로 바꿈"
"명시적변환[수동: Explicit Casting] 프로그래머가 직접 변환"
"그렇다면 메모리에서는 어떻게 될까? 새로운 값을 생성"
"큰자료형 -> 작은 자료형 :데이터가 잘림 이런것을 overflow or Truncation "
"작은 자료형 -> 큰자료형 :빈공간을 채워서 복사"
"실수에서 정수는 반올림이 아닌 버림"
"포인터 형변환 void int*역참조";

printf("%s\n", typeCasting) ; //형식지정자
     return 0;
    
}