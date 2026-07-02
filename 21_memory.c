#include <stdio.h>

//아래는 Standard Library 메모리를 동적으로 할당하는...

#include <stdlib.h>


int main (){//프로그램에 진입점(entry point)

    /* malloc과 calloc의 차이(초기화 여부), realloc은 크기 변경, free는 반납
    
    엑세스 메모리
    stack: 미리 정해진 크기만 가능해 나중에 크기 바꿀수 없음
    Heap: 네가 필요할때 내가 원하는 만큼 빌려줄게 다 쓰면 다시 반납해!

    프로그램이 실행될때 메모리 구조에서의 위치
    고급언어는 C 자바
    - 코드영역: 작성한 소스 코드가 기계어로 바뀌어 저장되는 곳
    - 데이터영역: 전역변수나 정적변수가 저장
    - 스택영역: 함수호출 시 생성되는 지역변수나 매개변수 저장
    - 힙영역: 개발자가 calloc, malloc 등으로 직접 할당하는 곳(수동관리)

    🔥 타입 int * : int가 시작되는 주소를 저장하는 변수  : 주소 저장 변수 (int용 주소)
    */
    int *ptr;
    ptr = calloc(4, sizeof(*ptr));
    //calloc (n, size) n개의 요소에 대해서 각요소당 size바이트 만큼의 메모리를 힙 영역에 저장
    //malloc 과의 차이점 할당된 메모리공간을 🟢모두 0으로 초기화🟢

    *ptr = 2; //첫번째 공간(index 0)에 2를 저장
    ptr[1] = 4; // 두번째 공간 index 1에 4를 저장
    ptr[2] = 6; 
    //ptr[3] = 0이 그래도 들어가 있음 

    printf("%d\n", *ptr);
    printf("%d %d %d\n", ptr[1],ptr[2],ptr[3]);

    //동적으로 할당받은 메모리는 반드시 직접해제해줘야함
    free(ptr);

    printf("\n--------------------------------\n");

    int *students; //int형 데이터를 가리키는 포인터 변수 stutdents선언
    //나중에 메모리공간을 확보했을 때 그 공간의 시작주소를 저장하기 위한 바구니에 만드는 과정

    int numStudents = 12; //학생수12명
  
    students = calloc(numStudents, sizeof(*students));
/*  calloc Continuous Allocation 연속할당

<Heap>
주소
0x1000  0  => 첫번째주소를 students에 저장
0x1004  0
0x1008  0

students = 0x1000 (메모리의 시작 주소)
*students = 0x1000에 저장된 첫 번째 int 값 (처음에는 0)

    numStudents 12만큼의 공간확보
    sizeof(*students) int크기의 4바이트를 각 요소의 크기로 이용
    총 48바이트를 메모리에서 빌려옴
    할당된 공간의 첫번째 주소를 *students(students포인터)에 저장 
*/
    printf("%d\n", numStudents * sizeof(*students)); //48

    free(students); //🔵 메모리의 시작 주소 🔵 를 넘겨야함
    //컴퓨터는 0x1000(주소)부터 할당했던 메모리를 반납해야겠다 라고 생각
    
     printf("--------------------------------\n");
    
    //정적 메모리 static 프로그램실행전에 변수를 위해 예약되는 메모리 
    // 프로그램 컴파일시 모든 변수에 대해 자동으로 메모리를 할당
    int student[20]; 
    printf("%zu\n", sizeof(student));  //80
    //그러나 학기가 시작하니 실제로 12명 학생만 참석=> 정적메모리..낭비가 심하다... 동적메모리사용!
    // sql) varchar(): 가변길이(100으로해놓아도 실제길이만큼만사용)
    

    //동적메모리...프로그램이 시작된 후 할당되는 메모리 또는 메모리 할당..
    //특정시점에 사용되는 메모리양을 완벽하게 제어
    printf("--------------------------------\n");

    /*
    프로그램이 과도하거나 불필요한 메모리를 차지하면 속도가 느려지고 성능저하
    메모리주소와 *포인터를 배운 이유가 이것임
    */

    //변수형태마다의 바이트 sizeof 연산자 사용 %zu 

    int myInt;  //4
    float myFloat; //4
    double myDouble; // 8
    char myChar; //1bytes 

    printf("%zu\n", sizeof(myInt));
    printf("%zu\n", sizeof(myFloat));
    printf("%zu\n", sizeof(myDouble));
    printf("%zu\n", sizeof(myChar));
    

    char memory[] = "메모리 관리란"
    "프로그램이 사용하는 메모리 양을 할당"
    "재할당 및 할당 해제(흔히 '해제'라고도 함)"
    "allocated momory"
    "정적 메모리: 프로그램 실행 전에 변수를 위해 예약되는 메모리"
    "동적 메모리: 프로그램 실행이 시작된 후에 할당되는 메모리"
    "동적 메모리에 엑세스: 배열과 같이 인덱스 번호를 참조"
    "메모리 재할당: 예약한 메모리 용량이 부족하면 메모리를 재할당하여 더크게 만든다"
    "메모리를 더 할당 할 수 없는 경우 relloc ...re location반환"  
    "메모리 할당 해제: 더필요없는 메모리 블록은 할당해제 free()"
    "malloc, calloc, realloc은 동적 메모리를 할당(관리)하는 함수"

    ;
    

    return 0;
}