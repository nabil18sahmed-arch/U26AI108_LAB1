#include <stdio.h>
int main()
{
    // 34. PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)
    int l1,l2  , i ,f ;

    l1=0;
    l2=1;
    f=0;
    printf("Fibonnaci series: ");
    for(i=0;i<20;i++)
    {
        printf("\n%d", f);
        f=l1+l2;
        l2=l1;
        l1=f;
    }

}