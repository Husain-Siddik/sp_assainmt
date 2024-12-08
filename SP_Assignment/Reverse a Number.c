//Write a C program to reverse a given integer using a while loop

#include<stdio.h>
int main()
{

    int x,y=0,z;
    printf("Enter a Number:-");
    scanf("%d",&x);
    
    while(x!=0)
    {
        z=x%10;
        y=(y*10)+z;
        x=x/10;
    }
    printf("%d is reversed",y);
    return 0;

}
