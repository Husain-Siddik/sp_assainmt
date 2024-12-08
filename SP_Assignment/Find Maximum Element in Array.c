//Write a C program to find the maximum element in an array using loops and conditional statements
#include<stdio.h>
int main()
{
    int x,m;
    printf("the element of arey = ");
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;++i)
    {
        scanf("%d",&arr[i]);
    }
    m=arr[0];
    for(int i=1;i<x;++i)
    {
        if(arr[i]>m)
        {
            m=arr[i];

        }
    }
    printf("Max element is %d",m);
    return 0;

}
