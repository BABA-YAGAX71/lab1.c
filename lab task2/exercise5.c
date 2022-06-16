#include<stdio.h>
int main(){
    int num,rev_num =0,remainder;
    scanf("%d",&num);

    while(num != 0){
         remainder=num%10;
         rev_num=rev_num*10+remainder;
         num=num/10;    
    }
    printf("the reversed number is =%d\n",rev_num);
    if(rev_num==num){
        printf("numbers is equal");
    }
    else{
        printf("numbers are not equal");
    }
    return 0;
}