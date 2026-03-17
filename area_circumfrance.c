#include<stdio.h>
int main()
{
    float r, a, c;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    a = 3.14 * r * r;
    c = 2 * 3.14 * r;
    printf("Area of the circle: %.2f\n", a);
    printf("Circumference of the circle: %.2f\n", c);
    return 0;
}           