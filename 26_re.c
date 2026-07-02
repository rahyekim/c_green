#include <stdio.h>


struct Car{

    char brand[30];
    int year;

};


int main(){

    struct Car car = {"kia", 2026};

    struct Car *ptr = &car;

    printf("brand: %s\n", ptr->brand);
    printf("year: %d\n", ptr->year);
        
    
    

    return 0;
}