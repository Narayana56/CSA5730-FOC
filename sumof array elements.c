#include<stdio.h>
int main()
{
	int a[100],n,i,s=0;
	printf("enter the numer of elements : \n");
	scanf("%d",&n);
	printf("enter the elements : \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	s=s+a[i];
	printf("sum of aray elements = %d ",s);
}
