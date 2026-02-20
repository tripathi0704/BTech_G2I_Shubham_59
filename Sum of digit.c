#include <stdio.h>
int main()
    {
    int n,sum = 0,r;
    printf("ener any no");
    scanf("%d",&n);
    while(n > 0)
    {
     r = n % 10;
     sum = sum + r;
     n = n / 10;
     }
     printf("sum of digit of %d",sum);
     return 0;
     }
    