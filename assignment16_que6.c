//6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
	int arr[3][3],i,j,rsum[3],csum[3];
	printf("enter 9 digit for creating 3x3 array ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{	rsum[i]=0;
		for(j=0;j<=2;j++)
		{
			rsum[i]=rsum[i]+arr[i][j];
		}
	}
	for(i=0;i<=2;i++)
	{
		csum[i]=0;
		for(j=0;j<=2;j++)
		{
			
			csum[i]=csum[i]+arr[i][j];
		}
	
	}
    printf("The sum or rows and columns of the matrix is :\n");
      for(i=0;i<=2;i++)
      {
	   for(j=0;j<=2;j++)
         printf("% 4d",arr[i][j]);
	     printf("% 8d",rsum[i]);
	     printf("\n");
       }
       printf("\n");
	    for(j=0;j<=2;j++)
             {
	        printf("% 4d",csum[j]);
             }
            printf("\n\n"); 
  }


