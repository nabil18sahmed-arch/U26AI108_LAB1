#include <stdio.h>
int main()
{
    // 16. PROGRAM TO READ THREE NOS. AND PRINT MAX.
    int a,b,c;

    printf("Enter the number 1 :");
    scanf("%d", &a);

    printf("Enter the number 2 :");
    scanf("%d", &b);

    printf("Enter the number 3 :");
    scanf("%d", &c);

    if (a>b)
    {
        if(a>c)
        {
            printf("The biggest number is  : %d", a);
        }
        else
        {
            printf("The biggest number is : %d", c);
        }
    }

    if(b>a)
    {
        if(b>c)
        {
            printf("The biggest number is : %d" , b);
        }
        else
        {
            printf("The biggest number is : %d" , c);
        }
    }
}