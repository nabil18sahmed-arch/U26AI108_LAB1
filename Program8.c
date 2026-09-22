#include<stdio.h>
int main()
{
    /*8. EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO CONVERT THIS INTO
        NUMBER OF DAY,HOURS AND MINUTES
    */
    float s , d , h , m ;
    s=31558150;
    m=s/60;
    h=m/60;
    d=h/24;
    printf("seconds:%f , \nminutes:%f,\nhours:%f,\ndays:%f",s,d,h,m);

}
