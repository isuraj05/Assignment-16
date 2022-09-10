#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,n,count=0;
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
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
				count++;
		}
	}
	printf("\n");
	if(count<(n*n)/2)
		printf("It is a sparse matrix");
	else
		printf("It is a dense matrix");
	
	return 0;
	getch();
}
