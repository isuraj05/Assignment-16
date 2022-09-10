#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int a[n][n],b[n][n];
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the values of %dx%d order matrix: ",n,n);
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>=i)
				b[i][j]=a[i][j];
			else
				b[i][j]=0;
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
	
	return 0;
	getch();
}
