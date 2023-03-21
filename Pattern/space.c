#include<stdio.h>

void main()
{
	int i,j,k,row;

	
	printf("ENter a num of rows\n");
	scanf("%d",&row);

	for(i=1;i<=row;i++)
	{
		for(k=row-1;k>=i;k--)
		{
			printf(" ");

		}
		for(j=i;j>=1;j--)
		{
			printf(" *");
		}
		printf("\n");
	}


}
