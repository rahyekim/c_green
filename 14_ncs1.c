#include <stdio.h>

//함수선언 미리 알리기
int calculate_total(int, int, int); //총점
 
float calculate_average(int); //평균
 
char determine_grade(float); //학점

//총점계산함수
int calculate_total(int kor, int eng, int math ){
    //함수의 시작
    int total = kor+ eng+ math;
    return total;
}

//평균 계싼 함수 
float calculate_average(int total){
    float avg = total / 3.0 ;
    // float avg = (float) total / 3 ; 
    return avg;
} 

// 학점 구하기 
char determine_grade(float avg){

    char grade;

    //학점 저장할 문자형 변수 
    if( avg >= 90 ){
        grade = 'A';
    }else if (avg>=80)
    {
        grade = 'B';
    }else if(avg >=70){
        grade = 'C';
    } else {
        grade = 'F';
    }
    return grade;
} 

int main(){

    /*변수 준비 데이터 담을 그릇 만들기
    char name[10]; 이름을 저장할 공간 ... 알파벳 기준 최대 9글자 
    마지막은 끝을 알리는 \0 까지 저장한다...
    */
    char name[10];
    int  kor, eng, math, total;  //총점 저장에 정수형 변수 
    float avg; //소수점이 나올수있으니 float을 사용
    int choice = 0; // 초기화를 시킴 초기값으로 0 을 대입 
    char grade; //학점 한글자 저장 'A' 'B'

    do{
        printf("이름"); scanf("%s", name);
        printf("국어"); scanf("%d", &kor);
        printf("영어"); scanf("%d", &eng);
        printf("수학"); scanf("%d", &math); //& : 이변수가 있는 주소로가서 값을 넣어라

        //데이터처리(함수에게 일시키기): 입력받은 점수들을 미리 만둘어둔 함수들에게 넘겨
        //계산된 결과값들을 다시 변수에 받아옴
        total= calculate_total(kor, eng, math);
        avg = calculate_average(total);
        grade = determine_grade(avg);

        //결과출력 
        printf("\n이름: %s\n", name);
        printf("\n총점: %d\n", total);
        printf("\n평균: %.2f\n", avg);
        printf("\n학점: %c\n", grade);

        printf("\n0:exit anyKey: continue :");
        scanf("%d", &choice);
        puts(""); //줄바꿈 printf("\n")
    }while (choice != 0);
    {
        /* code */
    }
    


    return 0;
}