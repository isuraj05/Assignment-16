#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,n,rowSum,colSum;
	printf("Enter a number: ");
	scanf("%d",&n);
	int a[n][n];
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the values of %dx%d order matrix: ",n,n);
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	
	for(i=0;i<n;i++)
	{
		rowSum=0;
		for(j=0;j<n;j++)
			rowSum=rowSum+a[i][j];
		printf("\nThe sum of row-%d of the matrix is %d",i+1,rowSum);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		colSum=0;
		for(j=0;j<n;j++)
			colSum=colSum+a[j][i];
		printf("\nThe sum of coloumn-%d of the matrix is %d",i+1,colSum);
	}
	
	return 0;
	getch();
}
