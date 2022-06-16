#include<stdio.h>
int main(){
    int num1,num2,num3,sum;
    scanf("%d %d %d", &num1,&num2,&num3);

    sum=num1+num2+num3;

    if(sum==180){
        printf("triangle is valid");
    }
    else{
        printf("triangle is invalid");
    }
    return 0;
}