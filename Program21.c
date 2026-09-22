#include <stdio.h>
int main()
{
    //PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC OPERATOR)AND THIS PERFORM USING SWITCH-CASE.(CASE IN CHAR FORM).
    int num1 , num2 ;
    char operator;

    printf("Enter the 1st number :");
    scanf("%d", &num1);

    printf("Enter the 2nd number :");
    scanf("%d" , &num2);

    printf("Select the operation to perform [Addition(+) , Subtraction(-) ,Multiplication(*), Division(/)]\n");
    scanf(" %c" , &operator);
    switch(operator)
    {
        case '+' : printf("\nResult : %d" , (num1+num2));
                   break;
        case '-' : printf("\nResult : %d" , (num1-num2));
                   break;
        case '*' : printf("\nResult : %d" , (num1*num2));
                   break;
        case '/' :  if (num2 == 0) 
                printf("Error: Division by zero is not allowed.\n");
             else 
                printf("\nResult: %f", (float) num1 / num2);
            break;
        default : printf("\n invalid input");

    }

}