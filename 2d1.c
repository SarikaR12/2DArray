#include<stdio.h>

main()
{
	int r,c,i,j;
	printf("Enter Row Size = ");
	scanf("%d",&r);
	
	printf("Enter Column Size = ");
	scanf("%d",&c);
	
	int a[r][c];
	printf("Enter value of Element = \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n----------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
}