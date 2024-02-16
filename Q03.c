/*
    LAB ASSIGNMENT: 05
    Question number: 03

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 09/02/2024
*/

#include <stdio.h>

int isUnique(int arr[], int limit) {
    for (int i = 0; i < limit; i++) {
        if (arr[limit] == arr[i]) {
            return 0; // Not unique
        }
    }
    return 1; // Unique
}

int main() {
    int n, i = 0;
    int arr[4];
    int number[24];
    int num = 0;

    printf("Enter the 4-digit number:\n");
    scanf("%d", &n);

    if (n < 1000 || n > 9999) {
        printf("Error in input! Program terminating.\n");
        return 1;
    }

    while (n > 0) {
        arr[i] = n % 10;
        n = n / 10;
        i++;
    }

    printf("---------------------------------\n");
    printf("The possible combinations are:\n");
    printf("---------------------------------\n");

    for (int i = 3; i >= 0; i--) {
        for (int j = 3; j >= 0; j--) {
            if (j == i)
                continue;
            for (int k = 3; k >= 0; k--) {
                if (k == i || k == j)
                    continue;
                for (int l = 3; l >= 0; l--) {
                    if (l == i || l == j || l == k)
                        continue;

                    number[num] = arr[i] * 1000 + arr[j] * 100 + arr[k] * 10 + arr[l];
                    if (isUnique(number, num)) {
                        printf("%d\n", number[num]);
                        num++;
                    }
                }
            }
        }
    }

    return 0;
}