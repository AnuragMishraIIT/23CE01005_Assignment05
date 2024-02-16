/*  
    LAB ASSIGNMENT: 05
    Question number: 05

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 09/02/2024
*/

#include <stdio.h>

int main()
{
    int sum=0,n;
    char end;
    do
    {
        printf("Provide the number:\n");
        scanf("%d",&n);

        if(n%2==0)
        {
            sum=sum+n;
        }

        printf("Do you want to continue?\n");

        do
        {
        getchar();
        scanf("%c",&end);
        
        if(end!='N'&&end!='n'&&end!='Y'&&end!='y')
        {
            printf("Not a valid input\n");
        }
        } while(end!='N'&&end!='n'&&end!='Y'&&end!='y');
        
    }
    while((end!='N'||end!='n')&&(end=='Y'||end=='y'));
    printf("The sum is: %d\n",sum);

    return 0;
}