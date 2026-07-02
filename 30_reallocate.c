#include <stdio.h>
#include <stdlib.h> //malloc, relloc, free 같은 동적메모리 할당함수
/*

메모리 재할당 Re-Allocation
: 예약한 메모리 용량이 부족하면 메모리를 재할당하여 더크게 만들수있음
relloc() 으로 할당된 메모리크기를 변경

*/



int main(){

    int *ptr1, *ptr2 ; //정수형 데이터를 가르킬 포인터변수 2개 선언 
    //1번은 처음할당메모리 2번은 크기조절후 메모리를 임시로 가르킬 용도

    //1.메모리 최초할당 힙영역에 4바이트 메모리 공간 확보 그시작주소 ptr1에 저장 
    ptr1 = malloc(4);
    //2. 메모리크기 재할당 ptr1크기를 8바이트로 늘리거나 줄여달라고 운영체제에 요청
    ptr2= realloc(ptr1, 8); //실패하든 성공하든 ptr2에 임시로둠
    //3.재할당 성공여부 검사
    if(ptr2== NULL){
        //재할당에 실패했을 경우 실행 
        printf("Fail unable to resize memory\n");
    }else{//재할당에 성공했을경우
        printf("success 8bytes rellocated at address %p \n", ptr2);
        ptr1= ptr2;
        }
        free(ptr1); //해제 메모리 다시 반납 🌟 c언어는 반납이 중요하당...
        ptr1= NULL;
    return 0;
}
