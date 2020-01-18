#include<stdio.h>

void main()
{
	int i,j,num;
	
	printf("Enter a value");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--)
	{
		for(j=i;j<=num;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}