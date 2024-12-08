//Write a program to create a simple calculator using the switch-case statement. The program should perform addition, subtraction, multiplication, and division based on user input user.


#include <stdio.h>
int main()
{
    float x, y;
    char z;
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);
    printf("Enter an operator (+, -, *, /) : ");
    scanf(" %c", &z);
    switch (z) {
        case '+':
            printf("Result: %.2f\n", x + y);
            break;
        case '-':
            printf("Result: %.2f\n", x - y);
            break;
        case '*':
            printf("Result: %.2f\n", x * y);
            break;
        case '/':
            if (y != 0)
                printf("Result: %.2f\n", x / y);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }
    return 0;
}