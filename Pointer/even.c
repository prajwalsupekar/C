#include<stdio.h>
void main()
{


	int x,i;
	int y=2;
	printf("enter limit:");
	scanf("%d",&x);

	for(i=1;i<=x;i++){
		printf(" %d ",y);
		y=y+2;
	}

}
