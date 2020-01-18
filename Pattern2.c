#include<stdio.h>

void main()
{
	int i,j,num;
	
	printf("Enter a value");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
			
		}
		printf("\n");
	}
	
	for(i=num;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}