#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr;

    //힙영역에 지정된 크기만큼 메모리 할당
    //calloc과 달리 malloc 은 0으로 초기화하지 않고 가비지값을 그대로 => 버그발생주의

    ptr = malloc(sizeof(*ptr));
    
    if(ptr == NULL){  //컴퓨터의 메모리가 꽉차서  
        //null 리턴
        printf("unable to allocate memory");
        return 1; //비정상종료 defensive programing 
    }
    //메모리 사용
    *ptr = 20;
    printf("integer value: %d \n", *ptr); //안전하게 할당받은 메모리공간에 20이라는 정수를 저장하고 출력
    //메모리반납 및 초기화
    free(ptr); //메모리 주소가 지워지는 것이 아님
    ptr =NULL; //포인터를 완전히 지워버려서 실수로라도 다시 사용하지 못하도록 원천 차단
    
    return 0;

}

/*
1.할당 : 필요한 만큼의 메모리 확보 
2.검사 : 메모리 부족으로 인한 프로그램 강제종료 방지
3.반납 : 메모리 누수 방지 
4.무효화 : 댕글링포인터 오류방지 
*/

/*
#include <stdio.h>
#include <stdlib.h> // 💡 얘네를 쓰려면 이 헤더파일이 필수입니다!

int main() {
    int student_count;
    printf("학생이 몇 명인가요?: ");
    scanf("%d", &student_count); // 만약 사용자가 3을 입력했다면?

    // 1. 입력받은 수만큼 딱 맞게 메모리 할당 (calloc으로 0 초기화)
    int *scores = (int*)calloc(student_count, sizeof(int));
    
    // [확인] 잘 빌려왔는지 검사 (가끔 메모리가 부족하면 NULL을 뱉음)
    if (scores == NULL) {
        printf("메모리가 부족합니다!\n");
        return 1;
    }

    // 2. 데이터 사용
    scores[0] = 90;
    scores[1] = 85;

    // 3. 갑자기 전학생이 2명 더 왔네? 방을 5개로 늘리자! (realloc)
    int *new_scores = (int*)realloc(scores, (student_count + 2) * sizeof(int));
    if (new_scores != NULL) {
        scores = new_scores; // 안전하게 새 주소로 업데이트
    }

    // 4. 🔥 대포 중요!! 다 썼으면 무조건 free로 메모리 반납!!
    free(scores); 

    return 0;
}
*/

/* C 언어의 밀당(속도 vs 편의성) calloc이 쬐끔 더 느림 청소해야해서 

malloc	Memory Allocation 메모리 방만 빌려줌 (초기화 안 함) // 이전 사람이 쓰던 쓰레기(쓰레기 값)가 그대로 남아있음.
calloc Clear Allocation  메모리 빌리면서 0으로 싹 청소해줌 // 들어가면 완벽하게 청소(0)가 되어 있어서 바로 사용 가능.
*/