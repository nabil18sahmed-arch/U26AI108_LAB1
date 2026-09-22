#include<stdio.h>
int main()
{
    //6.PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE. 
    int a , b ;
    printf("Enter the value of a ");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

     printf("The value before swapping %d , %d", a,b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("\nThe value after swapping %d , %d", a,b);
}