#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(65001); //한글깨짐방지 65001: UTF-8

    int myNum = 10; //일반 정수 변수
    int *ptr = &myNum; //ptr은 myNum의 주소 저장
 /*
 ptr은 값을 저장하는 게 아니라 주소를 저장하는 변수
printf("%p\n", ptr);   // 주소 출력 ✔️ptr → 그 주소를 저장
printf("%d\n", *ptr);  // 값 출력 ✔️ *ptr → 그 주소에 있는 값(= myNum의 값)
 */   
    int **pptr = &ptr ; //더블 포인터

    printf("myNum = %d\n", myNum);
    printf("*ptr= %d\n", *ptr);
    printf("**pptr = %d\n", **pptr);
    
    char PointerToPointer[] =
    "포인터가 다른 포인터를 가리키는 경우가 있다"
    "이를 포인터를 가리키는 포인터: 이중 포인터 라고 한다"
    "처음에는 혼란스럽지만 "
    "단지 간접 참조 단계가 하나 더 추가된 것 뿐"
    "다른 포인터의 주소를 저장하는 포인터인 셈.";

    printf("%s\n", PointerToPointer);

    return 0;
}