#include <stdio.h>


//void 자바에서 마찬가지로 스스로 해결을 못함..return값없음 실행함수

void myFunction() {
    printf("난누군가불러야만(호출) 해요");
}

//함수 매개변수

void myName(char name[], int age){ //파라미터 
    //매개값을 넣어주는건 하나만이 아니라는
    printf("hello %s\n", name) ; //아규먼트
}
int main() {

    myName("na", 18);

    printf("hello world");

    //호출
    myFunction();
    return 0;
}






