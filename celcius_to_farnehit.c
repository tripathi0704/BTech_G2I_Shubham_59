#include<stdio.h>
int main()
{
    float c,f;
    int op;
    printf("ENTER THE OPETION, \n1.CELCIUS TO FARENHEIT\n2. FARENHEIT TO CELCIUS\n");
scanf("%d", &op);
    if(op == 1)
    {   
    printf("enterthr temperature in celcius\n");
    scanf("%f", &c);
    f = (c * 9/5) + 32;
    printf("temperature in fahrenheit: %.2f\n", f);
    return 0;
    }
    else if(op == 2)
    {
        printf("enter the temperature in fahrenheit\n");
        scanf("%f", &f);
        c = (f - 32) * 5/9;
        printf("temperature in celcius: %.2f\n", c);
        return 0;
    }
    else
    {
        printf("invalid option\n");
        return 0;
    }
}