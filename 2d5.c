#include<stdio.h>

main()
{
	int i,j,r,c;
	
	printf("Enter of row size = ");
	scanf("%d",&r);
	printf("Enter of column size = ");
	scanf("%d",&c);
	
	int a[r][c];
	printf("Enter Value of element = \n");
	for(i=0;i<r;i++)
	{
		int sum=0;
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d" , &a[i][j]);
		}
		printf("\n");
	}
	printf("element in matrix are = \n");
	for(i=0;i<r;i++)
	{
		int sum=0;
		for(j=0;j<c;j++)
		{
			printf("%d" , a[i][j]);
		}
		printf("\n");
	}	
	printf("\n sum of all row elements = \n");
	for(i=0;i<r;i++)
	{
		int sum=0;
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];
		}
		printf("row-%d = %d\n",i,sum);
		
	}
	
}