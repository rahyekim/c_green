#include <stdio.h>


int add(int a, int b){

    return a+b;
    
}

int main(){

    int (*ptr)(int, int) = add;

    //가르키려는 함수가 끝난후에 반환하는 결과값 형태(자료형);
    //*ptr 포인터 변수임을 나타냄...
    //함수의 시작주소를 ptr에 집어넣음

    int result = ptr(5,3);
    //ptr은 단순 변수가 아니라 add함수와 완벽하게 동작하는 대리인(리모컨)이 됨
    printf("Result: %d", result);
    //함수 포인터는 나중에 코드가 길어지고 복잡해질때 상황에 따라 다른함수를 실행(콜백함수)하는
    //기술을 구현할때 좋다
    return 0;
}