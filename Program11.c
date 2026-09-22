#include <stdio.h>
int main ()
{
    //11. PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME
    int s,h,m;
    printf("Enter the total seconds");
    scanf("%d", &s);
    h=s/3600;
    m=(s%3600)/60;
    s=(s%3600)%60;
    printf("The time is (hh:mm:ss) %d:%d:%d",h,m,s);
}