#include<stdio.h>

int main()
{
    char alp;
    
    printf("Enter the alphabet:\n");
    scanf(" %c", &alp);

    if (alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u' ||
        alp == 'A' || alp == 'E' || alp == 'I' || alp == 'O' || alp == 'U')
    {
        printf("Entered alphabet is vowel");
    }
    else
    {
        printf("Entered alphabet is consonant");
    }

    return 0;
}