#include<stdio.h>
int main()
{
    double lenght,breadth,radius,area_rectangle,area_circle,perimeter_rectangle,perimeter_circle,pi;
    scanf("%lf", &lenght);
    scanf("%lf", &breadth);
    scanf("%lf", &radius);
    pi = 3.1416;

    area_rectangle = lenght*breadth;
    perimeter_rectangle = 2*(lenght+breadth);
    area_circle = pi*radius*radius;
    perimeter_circle = 2*pi*radius;

    printf("area of rectangle= %.2lf\n",area_rectangle);
    printf("perimeter of rectangle = %.2lf\n",perimeter_rectangle);
    printf("areqa of circle = %.2lf\n",area_circle);
    printf("perimeter of circle =%.2lf\n",perimeter_circle);

    return 0;
}