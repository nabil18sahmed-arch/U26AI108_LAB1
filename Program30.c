#include <stdio.h>
int main()
{
    //30. PROGRAM TO REVERSE OF A GIVEN NO.
    int num,rnum,q; 

    printf("Enter the number ");
    scanf("%d",&num);

    rnum=0;
    while(num>0)
    {
        q=num%10;
        rnum= rnum*10 + q;
        num=num/10;
    }

    printf("Reverse number : %d " , rnum);
}