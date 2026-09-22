#include <stdio.h>
int main()
{
    // 23. PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>).
    int x  ;
    float p , b  ;
    
    printf("Enter the base :");
    scanf("%f", &b);

    printf("Enter the power : ");
    scanf("%d" ,&x);
    p=1;
    if(x>=0)
    {
        for (p=1;x>0 ; x--)
        {
            p*=b;
        }
        printf("\n%f",p);
    }
    else if (x<0)
    {
        x=x*(-1);
        for (p=1;x>0 ; x--)
        {
            p*=b;
        }
        p=(1/p);
        printf("\n%f",p);
    }
    else
    {
        printf("invalid input");
    }
    
}