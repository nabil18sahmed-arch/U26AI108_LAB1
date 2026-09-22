#include <stdio.h>
int main()
{
    //38. PROGRAM TO PRINT 1,4,9,16,25,………N.
    int N , od ,num;

    printf("Enter the number of numbers in series to be displayed");
    scanf("%d \n " ,&N );

    od=1;
    num=1;
    while(N>0)
    {
        printf(" %d ," , num);
        od+=2;
        num+=od;
        N--;
    }
}