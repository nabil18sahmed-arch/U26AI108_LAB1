#include <stdio.h>
int main()
{
    /*43. WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.
          If sales<=Rs. 500, commission is 5%
          If sales>500 but <=2000, commission is Rs. 35 plus 10% above Rs. 500
          If sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000
          If sales>5000, commission is 12.5% */
    float s ,c ;

    printf("Enter the sales amount ");
    scanf("%f",&s);
    
    c=0;
    if(s<=500)
    {
        c=s/20;
    }
    else if (s>500 && s<=2000)
    {
        c=35+((s-500)/10);
    }
    else if(s>2000 && s<=5000)
    {
        c=185+((12)*(s-2000))/100;
    }
    else if(s<=500)
    {
        c=(125*s)/100;
    }

    printf("The commision is : %f",c);
}