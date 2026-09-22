#include <stdio.h>
int main()
{
    //4.PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES.
    float c, f ;
    printf("enter the temprature in farhenheit");
    scanf("%f",&f);

    c = (f - 32) * 5.0 / 9.0;
    printf("The value in celcius is : %f", c);
    

}
