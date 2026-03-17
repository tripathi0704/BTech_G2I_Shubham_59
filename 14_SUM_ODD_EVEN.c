#include <stdio.h>

int main() 
{
    int n, i, sumEven = 0, sumOdd = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Even numbers up to %d: ", n);
    for (i = 2; i <= n; i += 2) 
    {
        printf("%d ", i);
        sumEven += i;
    }
    printf("\n");

    printf("Odd numbers up to %d: ", n);
    for (i = 1; i <= n; i += 2) 
    {
        printf("%d ", i);
        sumOdd += i;
    }
    printf("\n");

    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);
    return 0;
}

