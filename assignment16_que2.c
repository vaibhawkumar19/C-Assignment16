//2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3]i,j,prod[3][3];
	printf("enter the 9 number for 3x3 first matrices ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("enter the 9 number for 3x3 second matrices ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("product of 3x3 matrices are \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			prod[i][j]=arr1[i][j]-arr2[i][j];
			printf("%d ",prod[i][j]);
		}
		printf("\n");
	}
}
