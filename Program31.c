#include <stdio.h>
int main()
{
    //31. PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.
    int num , sum , d ;

    printf("Enter the number");
    scanf("%d", &num);

    sum=0;
    while (num>0)
    {
        d=num%10;
        sum+=d;
        num=num/10;
    }

    printf("The sum of digits is %d " , sum);

}