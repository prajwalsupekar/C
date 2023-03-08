#include<stdio.h>
void main(){

int i,j,k;
int rows;



printf("enter no. of rows:");
scanf("%d",&rows);


	for(i=1;i<=rows;i++){

		for(k=1;k<=rows*2-i*2;k++)
		{
			printf(" ");
		}
		for(j=2*i-1;j>=1;j--){


		printf("%d",j);
		}
	
	printf("\n");
	}


}
