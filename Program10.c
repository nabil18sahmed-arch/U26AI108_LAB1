#include<stdio.h>
int main ( )
{
    /*10. WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE FORMULA.
      CM = M/2+P/2+C/2+E
     WHERE CM = Cut of f mark
     M = Marks in Mathematics out of 200
     P = Marks in Physics out of 200
     C = Marks in Chemistry out of 200
     E = Marks in entrance examination out of 100
     */
    int m , p , c , e ;
    float cm;
    printf("Enter the Maths marks out of 200");
    scanf("%d",&m);

    printf("Enter the Physics marks out of 200");
    scanf("%d",&p);

    printf("Enter the Chemistry marks out of 200");
    scanf("%d",&c);

    printf("Enter the Entrance examination marks out of 100");
    scanf("%d",&e);

    cm = m/2 + p/2 + c/2 + e ;

    printf("The cutoff marks of a student are: %f",cm);


}