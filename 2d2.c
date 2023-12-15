#include<stdio.h>

main()
{
	int i,j,r,c,n,len;
	
	printf("Enter row size = ");
	scanf("%d",&r);
	printf("Enter column size = ");
	scanf("%d",&c);
	
	int a[r][c];
	
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
	len=sizeof(a)/sizeof(n);
	printf("\n %d lenth of 2D array = ",len);
}