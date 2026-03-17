#include<stdio.h>
int main()
{ 
    int a,b,c,d,e,sum;
printf("Enter the marks of 5 subjects:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum= a + b + c + d + e;
    printf("The sum of marks is:\n%d",sum);
    return 0;
}