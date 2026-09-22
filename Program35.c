#include <stdio.h>
int main()
{
    //35. READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
    int i , num , q , j, sum ;
    printf("Enter the number : " );
    scanf("%d" , &num);
    i=0;
    q=0;
    j=0;

    while(num>0)
    {
        q=num%10;
        i+=q;
        num = num/10;
    }
    if((i/10)!=0)
    {
        while(i>0)
        {
            q=i%10;
            j+=q;
            i=i/10;
            
        }
        sum=j;
        printf("\n %d",sum);
    }
    else{
        sum=i;
        printf("\n %d", sum);
    }
}