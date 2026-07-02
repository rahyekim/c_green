#include <stdio.h>

//1 #define 매크로상수
#define PI 3.14159f

int main(){

    //2. #const 키워드 상수 :자료형과 함께 선언하여 값이 변하지 않음을 보장
    const int MAX_THREDS = 8;
    const char* APP_NAME = "My_System_Controller"; //*수정 못 하는 문자열을 가리키는 포인터

    //📍 포인터 (주소)를 들고 있음 👉 포인터 = 값이 아니라 “위치(주소)”를 저장하는 변수

    printf("%s\n", APP_NAME);
    printf("%d\n", MAX_THREDS);

    //연산에 상수를 활용 
    float radius = 5.0f;
    float area = PI * radius * radius;
    printf("%.2f\n", PI, area);

    //메모리로 표현하는 변수(언제는 값을 덮어쓸수있는 빈상자)와 
    // 상수 장금장치를 채운 전시용 상자
    
    char Const[] = "c언어에서 뿐만 아니라 상수는"
    "프로그램이 실행되는 동안 값이 절대 변하지 않는 데이터"
    "변수가 데이터를 담는 상자라면 상수는 바뀌지 않는 고정된 값"
    "c 언어의 상수종류"
    "리터럴 literal 상수: 코드에 직접 적어 넣은 값 그 자체"
    "매크로 상수: preprocessor를 사용"
    "키워드 상수: 읽기전용 수정 불가"
    "왜 상수를 사용할까 가독성 유지보수 안정성 실수로 라도 컴파일 단계에서 ";
    return 0;
}