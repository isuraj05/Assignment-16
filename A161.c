#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	for(i=0;i<3;i++)
	{
		printf("\nEnter the values of first matrix of order 3x3: ");
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	
	for(i=0;i<3;i++)
	{
		printf("\nEnter the values of second matrix of order 3x3: ");
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			c[i][j]=a[i][j]+b[i][j];
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d  ",c[i][j]);
		printf("\n");
	}
	return 0;
	getch();
}
