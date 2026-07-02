#include <stdio.h>

int main(){


    //스위치 
    int day=4;
    switch (day)
    {
    case 1:
        printf("mon");
        break;
    case 2:
        printf("tues");
        break;
    case 3:
        prinf("weds");
        break;
    default:
        printf("....");
    }

    //if 
    int time = 16;

    if(time <12){
        printf("morning");
    } else if( time<18 ){
        printf("day");
    } else{
        printf("eve");
    }
    (time<18)? printf("good day"): printf("good eve");






    return 0;
}