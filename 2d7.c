#include<stdio.h>

main()
{
	int i,j,r,c,sum=0;
	
	printf("Enter of row size = ");
	scanf("%d",&r);
	printf("Enter of column size = ");
	scanf("%d",&c);
	
	int a[r][c];
	printf("Enter Value of element = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d" , &a[i][j]);
		}
		printf("\n");
	}
		printf("the matrix element are  \n");
 		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d " , a[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i==j)
				{
					sum=sum+a[i][j];
				}
			}
		}
		printf("\n sum of diagonal element = %d",sum);
	
}