//Write a program that takes a score as input and assigns a grade (A, B, C, D, F) using the switch-case statement

#include <stdio.h>
int main()
{
    printf("Enter your score between 1 to 10 :- ");
    int x;
    scanf("%d", &x);
    char grade;
    switch (x )
    {
        case 10:
             grade = 'A';
            break;
        case 9:
             grade = 'A';
            break;
        case 8:
             grade = 'A';
            break;
        case 7:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }
    printf("The grade is %c", grade);
    return 0;
}
