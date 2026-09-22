#include <stdio.h>
int main()
{
    /* WRITE A PROGRAM IN C FOR THE FOLLOWING.
 AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS
 FOLLOWS.

Consumption in unit Rate for Charge
0-200 Re 0.50 per unit
210-400 Rs. 100 plus Re 0.65 per unit excess of 200
401-600 Rs. 230 plus Re 0.80 per unit excess of 400
Above 600 Rs. 425 plus Rs. 125 per unit excess of 600
 Print the amount to be paid by the consumer.
*/
    float r ,c ;

    printf("Enter the comsumption in unit ");
    scanf("%f",&c);
    
    r=0;
    if(c>=0 && c<=200)
    {
        r=(0.5)*c;
    }
    else if (c>=201 && c<=400)
    {
        r=100+((0.65)*(c-210));
    }
    else if(c>=401 && c<=600)
    {
        r=230+((0.80)*(c-400));
    }
    else if(c<600)
    {
         r= 425 +((1.25)*(c-600));
    }

    printf("The amount to be paid by costumer  is : %f",r);
}
