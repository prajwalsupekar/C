#include<stdio.h>
void main()
{
int x,i,j;
printf("enter no of rows");
scanf("%d",&x);

	for(i=1;i<=x;i++)
	{
		for(j=1;j<=x;j++){
			if(j%2!=0){
				printf(" $");
			}
			else{
				printf(" =");
			}
		}
		printf("\n");
	}

}
