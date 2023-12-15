#include<stdio.h>

main()
{
	int i,j,r,c,sum=0;
	printf("Enter Size of row = ");
	scanf("%d",&r);
	printf("Enter Size of column = ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],x[i][j];
	
	printf("Enter first Element Value = \n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter Second  Element value = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			x[i][j]=a[i][j]+b[i][j];
		}
	}
		printf("Addition of Two Array = \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d",x[i][j]);
			}
			printf("\n");
		}
}