//Write a program to print 1 to N using a recursion

#include<stdio.h>
void func(int N)
{
   if(N)
   {
   func(N-1);
   }
   else{
       return;
       
   }
   printf("%d ",N);
}
int main()
{
          int n;
          scanf("%d",&n);
          func(n);
          return 0;
}

