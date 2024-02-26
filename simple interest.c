#include<stdio.h>
int main()
{
	float p,t,r,s;
	printf("enter the principle amount : ");
	scanf("%f",&p);
	printf("enter the time : ");
	scanf("%f",&t);
	printf("enter the rate : ");
	scanf("%f",&r);
	s=p*t*r/100;
	printf("simple interest = %f",s);
	return 0;
}
