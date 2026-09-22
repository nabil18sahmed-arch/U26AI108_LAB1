#include<stdio.h>
int main()
{
    //3.PROGRAM TO CALCULATE GROSS SALARY.
    int bsal,allownces,bonus,gsal;
    
    printf("enter the base salary:");
    scanf("%d",&bsal);

    printf("enter the allowance:");
    scanf("%d",&allownces);

    printf("enter the bonus:");
    scanf("%d",&bonus);

    gsal=bsal+allownces+bonus;
    printf("The gross salary:%d",gsal);

}
