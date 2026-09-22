#include <stdio.h>
int main()
{
    //14. PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL.
    char ch ;
    printf("Enter the character(Single Charecter): ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("The Character is Capital Letter");
    }
    else if (ch>='a' && ch<='z' )
        printf("The Character is Small Case letter");
    else if (ch>='0' && ch<='9')
        printf("The Character is a Digit");
    else 
        printf("The Charecter is a Special symbol");

}