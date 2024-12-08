//Write a C program to generate the Fibonacci series up to n terms using a for loop

#include<stdio.h>
int main()
{
    int x,y=0,z=1,a;
    scanf("%d",&x);
    for(int i=0;i<=x;++i)
    {
        if(i<=1)
            {
                a=i;
            }
        else
        {
            a=y+z;
            y=z;
            z=a;
        }
        printf("%d ",a);

    }
    return 0;
}

