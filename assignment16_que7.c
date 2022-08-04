//7. Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>
void main()
{
	int arr[3][3],i,j,lower[3][3];
	printf("enter the 9 number for 3x3 matrix ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i<=j)
				lower[i][j]=arr[i][j];
			else
				arr[i][j]=0;	
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%   4d",arr[i][j]);
		}
		printf("\n");
	}
}
