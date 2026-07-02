#include <stdio.h>

int main() {

    int myNum; //값 집어 넣지 않고, 선언 정의만함..

    printf("Type a number and press enter \n");

    scanf("%d", &myNum) ; //  사용자가 숫자 입력
   
    /*
    ✅ 입력받은 정수를 myNum의 메모리 주소에 저장한다.
     사용자 입력값을 변수의 주소에 저장
    ✅ & 주소연산자: 메모리주소 (Address of operator)
    변수가 메모리상 어디에 있는지 그 주소를 찾아가서 
    사용자가 입력한 값을 그 주소에 저장하라는 의미
    */
    printf("your number is : %d", myNum);

    return 0;
}