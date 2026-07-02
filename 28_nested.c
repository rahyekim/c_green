#include <stdio.h>

/*
구조체 중첩????
*/

//차주
struct Owner{
    char firstName[30];
    char lastName[30];
};

//자동차 구조체
struct Car{
    char brand[30];
    int year;

    struct Owner owner; //중첩구조체 
};



int main(){

    //데이터 채우기(초기화)
    struct Owner person ={"john","Doe"};
    //자동차 정보 생성
    struct Car car1= {"BMW", 2019, person};

    printf("car: %s (%d)\n", car1.brand, car1.year);
    printf("person: %s %s\n" , car1.owner.firstName, car1.owner.lastName );

    return 0;
}