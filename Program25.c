#include <stdio.h>
int main( )
{
    //25. PROGRAM TO PRINT TABLE OF ANY NO
    int n , i , t;

    printf("Enter the number to Display the Table : ");
    scanf("%d" , &n);
    t=0;
    

    printf("The table of %d is :" , n);
    for(i=1;i<=10;i++)
    {
        t=t+n;
        printf("\n%d x %d = %d" , n , i , t);

    }
}
