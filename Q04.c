/*  
    LAB ASSIGNMENT: 05 
    Question number: 04

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 08/02/2024
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the triangle:\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int spc=1;spc<=(n-i);spc++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}