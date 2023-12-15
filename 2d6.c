#include<stdio.h>

main()
{
	int r,c;
	printf("Enter row size = ");
	scanf("%d",&r);
	printf("Enter column size = ");
	scanf("%d",&c);
	int a[r][c];
	int i,j,sum=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<c;j++)
	{
		sum=0;
		for(i=0;i<r;i++)
		{
			sum=sum+a[i][j];
		}
		printf("sum of %d column = %d\n",j,sum);
	}
}