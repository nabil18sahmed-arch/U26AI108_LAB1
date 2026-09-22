#include <stdio.h>
int main()
{
    //42. READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE
    int n , i , p;

    printf("Enter the number ");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("The number is neither composite or prime");
    }
    else
    {
        p=0;
        for(i=4 ; i<(n/2) ;i++);
        {
            if (n%i==0)
            {
                p+=1;
            }
        }
        if(p==0)
        {
            printf("The number is prime");
        }
        else{
            printf("The number is composite");
        }
    }
}