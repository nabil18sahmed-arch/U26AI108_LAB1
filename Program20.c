#include <stdio.h>
int main()
{
    //20. PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE.
    int fn , a , b ;
    
    printf("Enter the two numbers:");
    scanf("%d %d" , &a ,&b);

    printf("Select the function to perform \n 1.Addition(+) \n 2.Subtraction(-) \n 3.Multiplication(*) \n 4.Divion(/)\n");
    scanf("%d", &fn);
switch(fn)
{
   case 1 : printf("Result : %d",(a+b));
             break;
   case 2 : printf("Result : %d",(a-b));
             break;
   case 3 : printf("Result : %d",(a*b));
             break;
   case 4 :  if (b == 0) 
                printf("Error: Division by zero is not allowed.\n");
             else 
                printf("Result: %f\n", (float)a / b);
            break;
   default : printf("invalid input");

}



}