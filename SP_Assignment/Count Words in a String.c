//Write a program to count the number of words in a string. Assume words are separated by spaces


#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int cnt = 0, i = 0;
    
    printf("Enter a string= ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    while (str[i] != '\0')
        {
        if ((str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))) {
            cnt++;
        }
        i++;
        }
    printf("Number of words= %d\n", cnt);
    return 0;
}
