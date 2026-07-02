#include <stdio.h>


//구조체(데이터 묶음 틀) 정의

struct Test{

    int i ; //정수 담는 공간
    const char *g; //g문자열(문자배열의 첫번째 주소)을 가리키는 포인터

};


int main () {

    //구조체 배열 선언 및 초기화
    struct Test test[]= {{1,"AB"},{2,"DC"},{3,"EF"}};

    /*
    포인터 연결 struct Test *p Test 구조체를 가리키는 포인터 p를 만들고 
    &test[1] test배열의 두번째 요소(index 1)의 주소(&)를 가리키게 함
    */
    struct Test *p = &test[1];

    printf("%s", p-> g + ( p-> i -1)) ;

    /*
    p->i 2임 
    p-> i -1 은 1임
    p-> g 포인터 p가 가리키는 구조체의 g 값은 문자열 시작주소
    "D"
    p-< g+1 다음문자인 C 
    */

    return 0;
}