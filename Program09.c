#include <stdio.h>
int main()
{
     //9. PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND
    int h , m , s ,ts ;
    printf("enter the time in in hours :");
    scanf("%d",&h);

    printf("enter the time in in minutes :");
    scanf("%d",&m);

    printf("enter the time in in second :");
    scanf("%d",&s);

    ts= h*360+m*60+s;
    printf("the total time in seconds is : %d", ts);

}
