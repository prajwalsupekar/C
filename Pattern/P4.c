#include<stdio.h>
void main(){
	int i,j,x;
	char ch1='A';

	printf("enter no of rows:");
	scanf("%d",&x);

	for(i=1;i<=x;i++){
		for(j=1;j<=x;j++){
			printf(" %c",ch1);
			ch1++;
		}
	printf("\n");
	}
}
