#include <stdio.h>
int main ()
{
    //15. PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION.
    int sub1 , sub2 , sub3 , sub4 , sub5 , total ;
    float avg;

    printf("Enter the marks of subject 1");
    scanf("%d", &sub1);
    
    printf("Enter the marks of subject 2 ");
    scanf("%d", &sub2);

    printf("Enter the marks of subject 3 ");
    scanf("%d", &sub3);

    printf("Enter the marks of subject 4 ");
    scanf("%d", &sub4);

    printf("Enter the marks of subject 5");
    scanf("%d", &sub5);

    total = ( sub1 + sub2 + sub3 + sub4 + sub5 );
    if (total<=500 && total>=0)
    {
         avg = total/ 5 ;
    printf("average : %f", avg);
    
    if(avg>=70 && avg<=100)
    {
        printf("\nFirst division");
    }
    else if(avg>=50 && avg<=69) 
    {
        printf("\nSecond division");
    }
    else if(avg>=30 && avg<=49)
    {
        printf("\nThird division");
    }
    else if (avg>=0 && avg<=29)
    {
        printf("\nFail");
    }
    else 
        printf("\nMarks invalid");
    }
    else
        printf("invalid marks");


}