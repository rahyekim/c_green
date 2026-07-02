
#include <stdio.h>

int main(){



 int myNumbers[] =  {25, 50, 75, 100};


    printf("%d\n", myNumbers[0]);
    printf("%d\n", myNumbers[3]);
 
    //길이보기 사이즈연산자 타입이 크기를 바이트 단위
    printf("%zu\n", sizeof(myNumbers));  //배열전체크기 바이트 16 = int:4byte * 4개
    printf("%d\n",sizeof(myNumbers) / sizeof(myNumbers[0]));
    //2차원 배열 행렬 
    int matrix[2][3] = {{1,2,3},{3,4,5}};
    printf("%d\n", matrix[1][2]);


    //블록을 표현할때 
    int example[2][4][3]={
        {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
},
{
    {13, 14, 15},
    {16, 17, 18},
    {19, 20, 21},
    {22, 23, 24}
}
    };

    for (int i =0; i < 2; i++){
    printf("block %d:\n", i+1 );

        for (int j=0; j < 4; j ++){
            for(int k=0 ;k<3 ; k++){
                printf("%d ", example[i][j][k]);
            }
        printf("\n");
    }
    printf("\n");
    }
    
    return 0;
}

