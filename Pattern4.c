#include<stdio.h>

void main()
{
	int i,j,num;
	
	printf("Enter a value");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1 || j==i || i==num)
			{
				printf("%d ",j);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}