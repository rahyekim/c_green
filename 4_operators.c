
#include <stdio.h>


int main(){

    //증가 연산자 두가지종류 => 전위(prefix) 연산자 /후위 연산자
    
    //전위(prefix) 전산자: 먼저 값을 증감시키고 그결과를 사용
    int x = 5;
    ++x; //6
    --x; //5
    printf("%d\n", x);

    //후위 전산자  x++ x-- : 현재값을 사용후 나중에 그 값을 증가시킴 
    /*
    why 동작?
    메모리관점 .... 전위가 메모리 관점에서는 효율적...
    후위는 복사과정이 들어가므로 메모리관점에서는 비효율적....
    */

    int i = 5;
    printf("---전위연산자 (++i)---\n");
    printf("초기값: %d\n", i  );
    //먼저 증가시키고 그 다음에 대입 
    int result_pre = ++i;
    printf("연산후 i: %d\n", i);
    printf("연산후 result_pre: %d\n\n", result_pre);

      int j = 5;
    printf("---후위연산자 (j++)---\n");
    printf("초기값: %d\n", j  );
    //먼저 값을 사용하고 그 다음에 증가 시킴
    int result_post = j++;
    printf("연산후 j: %d\n", j);
    printf("연산후 result_post: %d\n\n", result_post);


    
    return 0;
}