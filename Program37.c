#include <stdio.h>
int main()
{
    //37. PROGRAM TO PRINT 2,4,6,8,10,12………N
    int num, ed; 

    printf("Enter the number of even numbers to be printed");
    scanf("%d" , &num);
    
    ed=2;
    while(num>0)
    {
        printf("%d , ",ed);
        ed+=2;
        num--;
    }
}