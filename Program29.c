#include <stdio.h>
int main()
{
    //29. PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.
    int num ,tnum , rnum , i ,q  ;
    
    printf("Enter the number");
    scanf("%d",&num);
    tnum=num;
    rnum=0;

   while(num>0)
    {
        q=num%10;
        rnum=rnum*10+q;
        num=num/10;
    }

    if(rnum==tnum)
    {
        printf("\nPalindrome number");
    }
    else
    {
        printf("\nNot a Palindrome number");
    }
    
}