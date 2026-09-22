#include<stdio.h>
int main()
{
    //18. PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) OPERATOR
    int a , b , c , max;
    printf("Enter the number 1 :");
    scanf("%d", &a);

    printf("enter the number 2 :");
    scanf("%d" , &b);

    printf("Enter the number 3 :");
    scanf("%d" , &c);

    max=(a>b)?((a>c)? a : c ) : ((b>c)? b :c) ;
    printf("The biggest number is :%d", max);
    
}