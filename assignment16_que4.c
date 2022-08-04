//4. Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
	int arr[3][3],i,j,sum=0;
	printf("enter the 9 numbers for 3x3 matrices ");
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
					if(i==j)
					sum=sum+arr[i][j];
				}

			}
		for(i=0;i<=2;i++)
		{
	for(j=0;j<=2;j++)
	{
		printf("%d  ",arr[i][j]);
	
	}
		printf("\n");
}
printf("right diagonal is %d ",sum);
}


