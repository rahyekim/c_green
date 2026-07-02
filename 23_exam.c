#include <stdio.h>

int main(void){
    char str[] = "REPUBLICOFKOREA";
   
    //c언어에서 문자열의 맨 끝에는 문자열의 끝을 알리는 \0

    int a = 0 ; //변수 a는 초기화
    
    while (str[a] != '\0')
    /*
    str[a] 의 값이 null문자(\0) 가 아닐때 까지 변수  a의 값을 1씩 증가
    문자열의 길이 구하는 과정
    a가 0부터 시작해서 15번째 도달하면 \0을 만남
    루프가 끝났을때 변수 A의 값은 15
     */
    ++a ;// 전위연산자 
    //단일 문자 출력 함수= putchar
    putchar(str[a-2]);  // 15-2 index 13= 14번째 출력하라는 의미


    return 0;
}