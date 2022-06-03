#include<stdio.h>
int main()
{
    float farhenheit,centigrate;
    scanf("%f", &farhenheit);
    
    centigrate = (5.0/9.0)*(farhenheit-32);
    printf("TEMPERATURE = %f", centigrate);

    return 0;

}