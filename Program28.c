#include <stdio.h>
int main()
{
    //28. PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.
    int num , dcount , arm , i , d , p , tnum;

    printf("Enter the Number :");
    scanf("%d" , &num);
    dcount=0;
    arm=0;
    tnum=num;

    for( i = num  ; i > 0 ; dcount++)
    {
        i = i / 10 ;
    }

    while(num>0)
    {
        d=num%10;
        i=dcount;
        for(p=1;i>0;i--)
        {
            p*=d;
        }
        arm+=p;
        num=num/10;
        
    }
    if (arm==tnum)
    {
        printf("\nArmstrong number");
    }
    else
    {
        printf("\nNot a Armstrong number");
    }


}