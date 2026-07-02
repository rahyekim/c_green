#include <stdio.h>

// 함수위에 있는 것=> 전역변수 어디서든 사용
//..함수안에 있는것=> 지역변수 함수안에서만 사용

int x= 5; //전역변수

void myNums () {

    printf("%d\n", x);
}

int main(){

    myNums();
    printf("%d\n", x);
    
    
    
    return 0;
}