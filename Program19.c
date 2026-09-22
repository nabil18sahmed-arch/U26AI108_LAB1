#include <stdio.h>
int main()
{
    //PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING CONDATIONAL OPERATOR.
    char ch ;

    printf("Enter the charecter ");
    scanf("%c",&ch);

    (ch>='a' && ch<='z')?printf("The character is smalll case letter"):printf("The charecter is not a small case letter");

}