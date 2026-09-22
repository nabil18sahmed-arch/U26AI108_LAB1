#include <stdio.h>
int main()
{
    //40. READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ.
    int N , sum ;

    printf("Enter the number : ");
    scanf("%d" , &N);
    sum=N;

    while(N>=0)
    {
        printf("Enter the number : ");
        scanf("%d" , &N);
        if(N>=0){
            sum+=N;
        }
    }
    printf("\n Loop closed");
    printf("\n The sum of numbers is : %d " , sum);
}