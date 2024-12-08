//Write a program to compare two strings without using the strcmp function

#include <stdio.h>
#include <string.h>

int main()
{

  	char Str1[100], Str2[100];

  	int result, i;

  	printf("1st String =  ");
    scanf("%s",Str1);
  	printf("2nd string =  ");
    scanf("%s",Str2);
  	for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);
  	if(Str1[i] < Str2[i])
   	{
   		printf("1st is less than 2nd string");
	}
	else if(Str1[i] > Str2[i])
   	{
   		printf("2nd string  is less than string 1");
	}
	else
   	{
   		printf("str1 is equal to str2");
	}
  	return 0;

}
