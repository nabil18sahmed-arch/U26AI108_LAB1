#include <stdio.h>
int main()
{
    //41. READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)
    int N , factor , i ;

    printf("Enter the number : ");
    scanf("%d",&N);

    printf("The factors of %d is : ",N );
    for(i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            printf("%d,",i);
        }
    }
}