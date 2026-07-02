#include <stdio.h> //표준입출력

//배열을 받아 평균을 계산하는 함수
double arr1(int p[], int len){
    //평균 계산에 사용할 합계를 저장할 변수
    double av = 0;

    //변수 선언만
    int i;

    //배열의 처음부터 끝가지 반복
    for (i=0 ; i<len; i++){
        //배열의 각 값을 double형으로 변환하여 합계에 더한다
        av += (double) p[i]; // 🔥 p[i] 👉"i번째 칸"
    } 
    
//👉for문은 “문장이 아니라 구조”라서 세미콜론을 붙이지 않고, 내부 문장에만 붙임

    return av / len; //합계를 배열의 길이로 나눠 평균값 반환

}

double arr2(int *p , int len){
    double av = 0;
    int i;

    for(i=0 ; i <len ; i ++){  //포인터 연산으로 배열의 값을 가져와 합계에 더한다
        av += (double) (* (p+i)); // 🔥 *(p + i) 👉 p에서 i칸 이동(1칸크기=자료형에따라자동)
    }
    return av/len;
}
//p + 0 → 첫 칸  , p + 1 → 두 번째 칸 , p + 2 → 세 번째 칸 ...자료형 기준 한 칸// 다음요소로 이동
int main() { 

    int arr[10]={ // 배열 수가 10개라는 뜻...
        2,4,6,8,10,12,14,16,18,20
    };

    int len=10;
    
    printf("%.2f", arr1(arr, len)+ arr2(arr, len));
    return 0;
}