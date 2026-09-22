#include<stdio.h>
int main()
{
    //7 . PROGRAM TO CALCULATE AREA OF A TRIANGLE.
    float h , b, a;
    printf("Enter the height of triangle ");
    scanf("%f",&h);

    printf("Enter the base of triangle");
    scanf("%f",&b);

    a=0.5*h*b;

     printf("The area of triangle is %f ", a);
}
