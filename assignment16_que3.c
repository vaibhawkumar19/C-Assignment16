//3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
	int arr[3][3],i,j,trn[3][3];
	printf("enter the 9 digit of 3x3 array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	//	printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			trn[j][i]=arr[i][j];
		}
	
	}
		printf("after transpose the matrices\n");
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				printf("%d ",trn[j][i]);
			}
	printf("\n");
	}
return 0;
}
