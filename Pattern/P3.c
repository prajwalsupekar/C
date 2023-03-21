#include<stdio.h>
void main(){
	int x,i,y=1,j;

	printf("enter no. of rows:");
	scanf("%d",&x);

	for(i=1;i<=x;i++){
		for(j=1;j<=x;j++){
			printf(" %d",y);
		}
		y++;
		printf("\n");
	}
}
