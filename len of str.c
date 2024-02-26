#include<stdio.h>
#include<string.h>
int main()
{
	char str[90];
	printf("enter the string : ");
	scanf("%s",&str);
	int len=strlen(str);
	printf("length of string = %d",len);
}

