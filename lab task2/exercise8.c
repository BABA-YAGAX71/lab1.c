#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);

    if(marks<=100 && marks>=80){
        printf("you got a+");
    }
    else if(marks<=79 && marks>=75){
        printf("you got a");
    }
    else if(marks<=74 && marks>=70){
        printf("you got a-");
    }
    else if(marks<=69 && marks>=65){
        printf("you got b+");
    }
    else if(marks<=64 && marks>=60){
        printf("you got b");
    }
    else if(marks<=59 && marks>=55){
        printf("you got b-");
    }
    return 0;
}