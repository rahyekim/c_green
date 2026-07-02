#include <stdio.h>



/*
구조체는 어느시점에서 보느냐에 따라 클래스와 객체를 의미
아래가 클래스개념 
구조체 정의: 마침표를 찍어줘야한다...
stuct 키워드로 틀을 만들어 놓으면 필요할 때 마다 그틀을 이용해 실제 데이터를 담을 붕어빵(변수)
를 찍어냄..
*/

struct myStructure{ //구조체 정의
    int myNum ; // 구조체 안에 들어갈 데이터 멤버
    char myLetter;

};   //“새로운 자료형(타입)을 만드는 선언” 이 설계도 등록 끝 !! => ; 

int main(){

    struct myStructure s1; //훗날 객체로 변신

    s1.myNum =13;
    s1.myLetter= 'B'; //""큰따옴표 아님!!

    printf("내 숫자는 : %d\n", s1.myNum);
    printf("내 문자는 : %c\n", s1.myLetter);   //s 아님!! char!!

    return 0;
}