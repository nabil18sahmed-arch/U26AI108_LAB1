#include <stdio.h>
int main()
{
    //26. PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.
    int osum ,esum , N , i ;
    
    printf("Enter the value of N :");
    scanf("%d" , &N);

    esum=0;
    osum=0;
    for(i=2 ; i<N ;i++)
    {
        if(i%2==0)
        {
            esum+=i;
        }
        else
        {
            osum+=i;      
        }
    }
    printf("The sum of odd numbers is : %d", osum);
    printf("\n The sum of even numbers is : %d", esum);
}