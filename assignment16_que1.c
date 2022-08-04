//1. Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
	int arr[3][3],i,j,arr1[3][3],add[3][3];
	printf("enter the first 3x3  martices\n ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++){
			scanf("\n%d",&arr[i][j]);
		}
	}
	printf("enter 9 element of secomd 3x3 martices\n ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("addition 9 element of 3x3 martices\n ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++){

	add[i][j]=arr[i][j]+arr1[i][j];
	printf("%d ",add[i][j]);
	}
	printf("\n");
	}
return 0;
}
	
	


