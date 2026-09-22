#include <stdio.h>
int main()
{
    // 22. PROGRAM TO CALCULATE FACTORIAL OF A NO.
    int factorial, n;
    printf("Enter the number to calculate the factorial");
    scanf("%d", &n);
    factorial=1;

    if (n>0)
    {
        while (n!=0)
        {
            factorial*=n;
            n--;
        }
        printf("The factorial of number is : %d",factorial);

    }
    else if (n==0)
    {
        printf("The factorial of number is : %d",factorial);
    }
    else 
    {
        printf("Invalid input");
    }
    
}