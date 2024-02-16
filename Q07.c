/*
    LAB ASSIGNMENT: 05
    Question number: 07

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 09/02/2024
*/

#include <stdio.h>

int main()
{
    int array[10], i, j;

    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d= ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nThe input unsorted array is:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("\nThe sorted array is:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}