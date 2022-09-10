#include<stdio.h>
#include<conio.h>

int main()
{
	int m,n,i,j,x,y;
	printf("Enter two numbers: ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	
	for(i=0;i<m;i++)
	{
		printf("\nEnter the values of %dx%d order matrix: ",m,n);
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	
	x=m;
	y=n;
	int b[y][x];
	
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	getch();
}
