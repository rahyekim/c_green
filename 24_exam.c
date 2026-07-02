#include <stdio.h>

//연결리스트 만들기 Linked List


struct Node { //구조체-> 훗날 class
    struct Node* next; //다음상자를 가르키는 화살표

    unsigned int x;//숫자 공간 데이터를 담는 공간 u:음수 방지
};

int main(){
    //처음에는 화살표(next)가 아무것도 가르키지 않는 0(null)상태 
    struct Node t1={0, 5u};
    struct Node t2={0, 7u};
    struct Node t3={0, 11u};
    
    t3.next= &t2; // t3화살표가 t2를
    t2.next= &t1; // 

    //11(t3)=> 7(t2) => 5(t1)
    
    struct Node* curr= &t3;  // Node를 가리키는 포인터 선언

    //*는 “선언에서는 타입을 의미”, “사용에서는 값을 꺼내는 의미”다
    //포인터 curr가 기차의 맨 앞칸인 t3부터 시작하여 다음칸으로 계속 
    int sum = 0;

    while(curr){
        sum = sum + 3 + curr -> x;
        curr = curr-> next;
    }

    /*
    단계 가리키는 노드(curr->x) 공식(sum = sum*3 + x) 결과 (sum)
    1회차t3(11)   0*3 + 11 => 11
    2회차 t2(7)   11*3 +7 => 40 
    3회차 t1(5)   40*3 + 5 => 125

    비트 연산과 최종계싼(xor연산 배타적 논리합) ^
    두숫자를 이진수(0과1로 나눴을때 각자리수가 서로 다르면 1같으면 0이되는 계산법)
    
    sum= (sum ^ 42u) +100u;
*/

    return 0;
}