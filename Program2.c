#include<stdio.h>
int main()
{
    //2.PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE
    int sub1,sub2,sub3,sub4,sub5, total;
    float percentage;

    printf("Enter the marks of subject1 :");
    scanf("%d", & sub1);

    printf("Enter the marks of subject2 :");
    scanf("%d", & sub2);

    printf("Enter the marks of subject3 :");
    scanf("%d", & sub3);

    printf("Enter the marks of subject4 :");
    scanf("%d", & sub4);
    
    printf("Enter the marks of subject5 :");
    scanf("%d", & sub5);

    total= sub1+sub2+sub3+sub4+sub5;
    percentage=total/5;

    printf("The total marks: %d",total);
    printf("\nThe percenatge is: %f",percentage);
}