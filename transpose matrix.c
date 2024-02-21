#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,m,n;
	printf("enter the number of rows = ");
	scanf("%d",&n);
	printf("enter the number of columns = ");
	scanf("%d",&m);
	printf("enter the elements of matrix.");
	for(i=0;i<n;++i)
	for(j=0;j<m;++j)
	scanf("%d",&a[i][j]);
	for(i=0;i<m;++i)
	for(j=0;j<n;++j)
	b[i][j]=a[j][i];
	printf("transpose of matrix is : \n");
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		printf("%3d",b[i][j]);
		printf("\n");
	}
	return 0;
}
