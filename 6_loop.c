
#include <stdio.h>

int main(){


    int i;
    int sum = 0;

    for( i=1; i<=5; i++){
        sum= sum+i;
    }

    printf("%d\n", sum);

    int countdown=3;
    while (countdown>0)
    {
        printf("%d\n", countdown);
        countdown--;
    }
    
    printf("happynewyear");



    return 0;

}