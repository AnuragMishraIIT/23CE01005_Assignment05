/*
    LAB ASSIGNMENT: 05
    Question number: 06

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 08/02/2024
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, len, count = 0;
    printf("Input the number of characters to be entered:\n");
    scanf("%d", &n);

    char ch[n];
    printf("Enter the characters one-by-one:\n");
    getchar();

    for (i = 0; i < n; i++)
    {
        scanf(" %c", &ch[i]);
    }
    getchar();

    printf("Enter the word you want to construct:\n");

    char word[60];
    scanf("%s", word);

    len = strlen(word);

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (word[i] == ch[j])
            {
                count++;
                break;
            }
        }
    }

    if (count==len)
        printf("Yes, the word '%s' can be constructed from the given characters.\n", word);
    else
        printf("No, the word '%s' cannot be constructed from the given characters.\n", word);

    return 0;
}
