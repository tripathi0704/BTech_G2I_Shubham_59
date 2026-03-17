#include<stdio.h>
int main()
{
    float a,b,temp;
    printf("enter the value of a and b\n");
    scanf("%f %f", &a, &b);
    temp = a;   
    a = b;
    b = temp;
    printf("after swapping the value of a and b is %.2f and %.2f\n", a, b);
    return 0;
}       