#include <stdio.h>
int main ()
{
    //27. PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT.
    int num , i , p ;

    printf("Enter the number : ");
    scanf("%d" , &num);
    p=0;

    if(num>1)
    {
        for(i=4 ; i<(num/2) ; i++)
        {
            if(num%i==0)
            {
                p+=1;
            }
        }
        if(p>0){
            printf("%d is not a prime number " , num);
        }
        else{
            printf("%d is a prime number" , num);
        }
    }
    else
    {
        printf("%d is not a prime number " , num);
    }
}