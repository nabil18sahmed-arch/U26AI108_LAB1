#include <stdio.h>
int main()
{
    //39. PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N
    int N , i  ;
    double sum = 0.0;
    double fact = 1.0;

    printf("Enter the number of numbers in series to be displayed");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    { 
            fact*=i;
        sum+=((double)i/fact); 
    }
    printf("Sum of the series up to %d terms = %lf\n", N, sum);

    return 0 ;

}