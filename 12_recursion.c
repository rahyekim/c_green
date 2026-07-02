#include <stdio.h>

int sum(int k); // 🌟 함수원형 (prototype) 선언 
/*main 함수 아래에 잇는 sum 함수를 미리 알려주어 main에서 문제없이 호출할 수 있게 함..
1. 메뉴판 먼저 본다 (prototype)
2. 주문한다 (main)
3. 주방에서 만든다 (function)
*/
int main(){

    int result = sum(10);  //sum 모름 그래서 위에 함수원형 선언해줌
    printf("%d", result);

    return 0;
}

// 함수는 호출될때만 실행되는 코드블럭 -> 스스로를 호출(재귀함수)
// 거울을 마주보고 잇는 거울처럼 함수가 스스로를 호출 ...
int sum(int k) { //(파라미터) 함수를 호출할때 인수

    if(k > 0){
        return k + sum(k-1); //✨✨✨ 10+ sum(9)-> 9+sum(8)-> ...1+sum(0)...
    } else{
        return 0;
    }
}