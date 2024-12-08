//Write a C program to check whether a given number is prime or not using a for loop and conditional statements

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = 0;  
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
