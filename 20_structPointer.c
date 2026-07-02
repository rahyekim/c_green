#include <stdio.h>


struct Car{ //car라는 이름의 구조체 설계도
    char brand[30]; //최대 29글자를 쓸수있는.. 끝을 알리는 \0까지 포함
    int year;

};

void updateYear(struct Car *c) {
    //구조체 전체를 복사해서 넘겨받느게 아니라
    //구조체가있는 메모리 주소(포인터c)만 넘겨받는다

    c-> year= 2025;
    //화살표연산자 조상격.. C가 가리키는 주소를 찾아가서(*) 그안에 있는 year 멤버에 접근하라는얘기
    //예도 상동이다. (*c).year = 2025
}
int main (){
    struct Car myCar= {"Toyota", 2020};
    updateYear(&myCar);

    printf("Brand: %s\n", myCar.brand);
    printf("Year: %d\n", myCar.year);
    

    

    return 0;
}