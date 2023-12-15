#include<stdio.h>

main()
{
	int i,j,r,c,sum=0,ans=0,cross;
	
	printf("Enter of size = ");
	scanf("%d",&r);
	printf("Enter of size = ");
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
	printf("element in matrix are = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d" , a[i][j]);
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
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i+j==((c+1)-2))
			{
				ans=ans+a[i][j];
			}
			
		}
	}
	cross=sum+ans;
	printf("\n sum of cross-diagonal = %d",cross);
	
}