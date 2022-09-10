#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,n,sum=0;
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
		sum=sum+a[i][i];
		
	printf("\nThe sum of left diagonals of the matrix is %d",sum);
	return 0;
	getch();
}
