/*  
    LAB ASSIGNMENT: 05
    Question number: 02

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 09/02/2024
*/

#include <stdio.h>

int main()
{
    int a,b,q=0,r;
    printf("Dividend= ");
    scanf("%d",&a);
    printf("Divisor= ");
    scanf("%d",&b);

    if(b>a)
    {
        printf("Input error. Program terminating.\n");
        return 1;
    }

    while(a>=b)
    {
        q=q+1;
        a=a-b;
    }
    r=a;

    printf("Quotient= %d\n",q);
    printf("Remainder= %d\n",r);

    return 0;
}