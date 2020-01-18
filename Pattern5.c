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
			if(j%2==0)
			{
				printf("0 ");
			}
			else{
				printf("1 ");
			}
		}
		printf("\n");
	}
}