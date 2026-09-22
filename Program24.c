#include <stdio.h>
int main()
{
    /*24. WRITE A C PROGRAM TO FIND THE VALUE OF Y USING
y=
1+x where n=1
1+x/n where n=2
1 +xn when n=3
1 + nx when n>3 or n<1*/

int n;
float x , y ;

printf("Enter the value of x ");
scanf("%f" ,&x);

printf("Enter the value of n");
scanf("%d" , &n);

y=1;
if(n==1)
{
    y = 1 + x ;
    printf("The value of Y is : %f",y);
}
else if (n==2)
{
    y = 1 + (x/n);
    printf("The value of Y is : %f",y);
}
else if (n==3)
{
    y= 1 + (x*x*x);
    printf("The value of Y is : %f",y);
}
else if (n>3 || n<1)
{
    y= 1 + n*x;
    printf("The value of Y is : %f ",y);
}
else
{
    printf("Invalid input");
}
}