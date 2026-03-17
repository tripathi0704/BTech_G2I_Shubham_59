#include<stdio.h>
int main()
{
    int n1,n2,op;
    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d",&n1,&n2);
    printf("ENTER OPERATION (1-4): ");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            printf("SUM: %d\n", n1 + n2);
            break;
        case 2:
            printf("DIFFERENCE: %d\n", n1 - n2);
            break;
        case 3:
            printf("PRODUCT: %d\n", n1 * n2);
            break;
        case 4:
            printf("DIVISION: %d\n", n1 / n2);
            break;
        default:
            printf("INVALID OPERATION\n");
    }
    return 0;
}
