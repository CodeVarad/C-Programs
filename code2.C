/* Program to add 2 integers*/
/* Author: CodeVarad */

#include<stdio.h>
int main() 
{
 int  a, b, sum;

    printf("Enter the first integer : ");
    scanf("%d", &a);
    printf("\nEnter the second integer : ");
    scanf("%d", &b);

    sum = a + b;

    printf("\nThe sum of %d and %d is %d.", a, b, sum);
    
    return 0;

}