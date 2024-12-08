//Write a program to declare an integer variable, initialize it, and display its value and address using pointers

#include <stdio.h>

int main()
{
    int num = 42;
    int *ptr = &num;
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value using pointer: %d\n", *ptr);
    printf("Address stored in pointer: %p\n", (void*)ptr);

    return 0;
}


