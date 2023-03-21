#include<stdio.h>
void main(){
	int x,i,j;
	printf("enter no of rows:");
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		
		for(j=i;j<=i+3;j++)
		{	
			printf(" %d",j);
			
		}
		printf("\n");
	}
}
