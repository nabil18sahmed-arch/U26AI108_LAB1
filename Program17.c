#include <stdio.h>
int main( )
{
    //17. PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&)
    int a , b , c ;

    printf("Enter the number 1 : " );
    scanf("%d" , &a);

    printf("Enter the number 2 : ");
    scanf("%d" , &b );

    printf("Enter the number  3 : ");
    scanf("%d", &c);

    if(a>b && a>c)
    {
        printf("The biggest number is : %d ", a);
    }
    if(b>a && b>c)
    {
        printf("The biggest number is : %d " , b );
    }
    if(c>a && c>b)
    {
        printf("The biggest number is :%d ", c);
    }
}