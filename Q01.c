/*  
    LAB ASSIGNMENT: 05
    Question number: 01

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 08/02/2024
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int original_n,n;
    int d,d_count=0,sum=0,unique=1;
    printf("Enter the integer:\n");
    scanf("%lld",&n);

    original_n=n;
    while(n>0)
    {
        d_count=d_count+1;
        n=n/10;
    }
    n=original_n;
    
    int* arr=(int*)calloc(d_count,sizeof(int));

    for(int i=0;i<d_count;i++)
    {
        d=n%10;
        unique=1;
        
        for(int j=0;j<i;j++)
        {
            if(arr[j]==d)
            {
                unique=0;
                break;
            }
        }

        if(unique==1)
        {
        arr[i]=d;
        sum=sum+d;
        }
        n/=10;
    }

    printf("The number of digits are: %d\n",d_count);
    printf("The sum of unique digits are: %d\n",sum);
    
    free(arr);
    return 0;
}