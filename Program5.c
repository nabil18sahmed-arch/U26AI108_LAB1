#include<stdio.h>
int main()
{
    //5.PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE.
    int a , b , c;
    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("The value before swapping %d , %d", a,b);

    c=a;
    a=b;
    b=c;

    printf("\nThe value after swapping %d , %d", a,b);


}