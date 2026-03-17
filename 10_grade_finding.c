#include<stdio.h>
int main() 
{
    int marks[5], total = 0;
    float percentage;
    char grade;
    
    printf("Enter marks of 5 subjects:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    percentage = (total / 500.0) * 100;
    if (percentage >= 90) 
    {
        grade = 'A';
    } else if (percentage >= 80) 
    {
        grade = 'B';
    } else if (percentage >= 60) 
    {
        grade = 'C';
    } else 
    {
        grade = 'D';
    }
    
    printf("\nTotal Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
1
    return 0;
}
