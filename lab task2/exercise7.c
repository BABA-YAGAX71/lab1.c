#include<stdio.h>
int main (){
    int num1,num2,area_triangle,perimeter_triangle;
    scanf("%d %d",&num1,&num2);

    area_triangle=num1*num2;
    perimeter_triangle=2*(num1+num2);
    

    if(area_triangle<perimeter_triangle){
        printf("perimeter of triangle is greater");
    }
    else{
        printf("area of triangle is greater");
    }
return 0;
}