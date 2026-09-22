#include <stdio.h>
int main()
{
    //PROGRAM TO PRINT 1,3,5,7,9………N.
    int num, od; 

    printf("Enter the number of odd numbers to be printed");
    scanf("%d" , &num);
    
    od=1;
    while(num>0)
    {
        printf("%d , ",od);
        od+=2;
        num--;
    }
}