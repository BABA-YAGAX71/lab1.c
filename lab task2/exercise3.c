#include<stdio.h>
int main (){
    int year;
    scanf("%d", &year);

    if(year%400==0){
        printf("it is a leap year",year);
    }
    else if(year%100==0){
        printf("it is a leap year",year);
    }
    else if(year%4==0){
        printf("it is a leap year",year);
    }
    else{
        printf("it is not a leap year",year);
    }
    return 0;
}