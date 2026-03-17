#include <stdio.h>

int main() {
    int n, i;
    long a = 0, b = 1, c;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%ld ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    
    return 0;
}