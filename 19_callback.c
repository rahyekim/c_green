#include <stdio.h>

//호출해야만 하는 함수 스스로 해결못한,ㄴ...
void sayHello(){
    printf("평범한 함수");
}
//남을 불러주는 함수

void runCallback(void (*callback)()){
    //매개변수도 없고 반환값도 없는 void 함수의 주소만 내게 넘겨주면 내가 그것을
    //callbalck이라는 이름의 리모콘으로쓰겟다.
    printf("before calling the callback...\n");
    callback();
    printf("after calling the callback ");
}

int main(){

    runCallback(sayHello);

    return 0;
}

/*
콜백을 사용하는 이유 👉 콜백 = “나중에 실행할 행동을 외부에서 끼워넣는 구조”
껍데기(시스템)와 알맹이(사용자로직)를 분리 할 수있음
소프트웨어 아키텍처를 짤때 부품을 갈아 끼우기 쉽게.. 디커플링..
디커플링을 만드는 훌륭한 설계방식...
단 너무 치우치면 콜백함수지옥에 빠질 수있따.

*/