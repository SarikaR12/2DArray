#include<stdio.h>

main()
{
	int i,j,r,c,sum=0,len,avg,n;
	
	printf("Enter of Row size = ");
	scanf("%d",&r);
	printf("Enter of column size = ");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("Enter Element Value = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("matrix Element are \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("\n sum of Array = %d",sum);
	len=sizeof(a)/sizeof(n);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			avg=sum/len;
		}
	}
	printf("\n Averrage of array = %d",avg);
}