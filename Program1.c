#include <stdio.h>
int main(void)
{
    //1. PROGRAM TO CALCULATE SIMPLE INTEREST. 

    int p , r , t ;
    float i ;
    
    

    printf("enter the princple amount");
    scanf("%d",&p);

    printf("enter the rate of intrest");
    scanf("%d",&r);

    printf("enter the time period (in years) ");
    scanf("%d",&t);

    i=(p*r*t)/100;
    printf("The intrest is =%f",i);


}