#include<stdio.h>
void main(){


	int l,i,j,k;
	int rows;
	int x=0;
	int y=0;
	int z=0;

	printf("enter no. of rows:");
	scanf("%d",&rows);

	for(i=1;i<=rows;i++){
	
		for(j=1;j<=rows-i;j++){

			printf(" ");
		}
		x=z+i;
		for(k=1;k<=i+y;k++){
			
			printf("%d",x);
			x--;
			
		}
		z++;
		y=i;
		printf("\n");
	}



}
