#include <stdio.h>

int main(){

    
    //변수에 타입들이 있음
    int myNum = 7;
    float myFloat = 3.99; //소수점 정밀도 6-7
    char myLetter = 'D'; //단일문자열 무조건 '' 
    char basicData[] = "c에서하나의 글자를 사용할때";
    double myDouble = 99999999999;  // ?????
    
    printf("%d\n", myNum);
    printf("%f\n", myFloat);
    printf("%lf\n", myDouble); 
    printf("%c\n", myLetter);
    printf("%s\n", basicData);


    // 문자 여러개 표기할때 [ ] array 표시해줘야
    //캐릭터 단일문자 일때는 형식 지정자 c 여러문자일때는 s
   
    // scientific Numbers 
    float f1= 35e8; printf("%f\n", f1);
    double d1 = 12E7;  printf("%lf\n", d1);

    //수동소수점 정밀도 
    float myF = 3.5;
    printf("%.1f\n", myF); // 3.5
    printf("%f\n", myF); //3.500000


    /*
    메모리 
    [컴퓨터 메모리에서 특정 데이터 유형이 차지하는 공간의 크기]
    에서 할당되는 크기 

    int : 2~4 bytes
    float: 4bytes
    double : 8bytes
    char : 1byte

    */

    int uInt;
    float uFloat;
    double uDouble;
    char uChar;

    printf("%zu\n", sizeof(uInt));
    printf("%zu\n", sizeof(uFloat));
    printf("%zu\n", sizeof(uDouble));
    printf("%zu\n", sizeof(uChar));
    
    /*
    % 준비해
    z 크기 size 는 ~ 타입이야라고 알려주는 길이 수정자 :Length Modifier
    u unsigned 부호없는 정수 0과 양수 형태로 출력하라는 의미
    */
    
    
    
 
    return 0;
}
/*
#(해시기호) 컴파일러에게 보내는 비밀신호
프로그래밍에서 진짜 코드를 컴퓨터가 읽기 전에 
미리(pre)준비해야될 작업을 지시할때

이를 프로그래밍 용어로 전처리기: preprocessor

본 게임(코드 실행이) 시작되기 전에 대기실에서 준비운동을 시키는 명령어

include : 포함하다. 가져오다
내코드안으로 이파일을 포함해서같이 묶어줘!
다른 사람이 이미 잘 만들어 놓은 도구 상자(라이브러리)를 
내모니터 앞으로 배달... = import from 같은...

<stdio.h> 앞글자를 따서 만듦 standard(표준) i/o (input입력-키보드/output출력-모니터화면)
.h(header file): 머리에 해당하는 중요한 기능 정의들이 모여있는 파일

int: 컴퓨터에 돌려줄 결과물의 종류 (Integer[정수, 소수점이 없는 숫자])
return 0 (문제없이 잘 끝낫어!!!)

main: 프로그래밍의 시작점 : 코드가 아무리 길어져도 
() : 이름 뒤에 소괄호가 붙으면 프로그래밍에서는 함수

{ 자이제 시작 
 } 끝낫다

 ; 구분자 적용해야됨...
*/