#include<stdio.h>
void main(){

int i,j,k;
int rows;



printf("enter no. of rows:");
scanf("%d",&rows);


for(i=1;i<=rows;i++){
	int x=1;

	for(j=1;j<=rows-i;j++){
	
		printf(" ");
	}

	for(k=1;k<=i;k++){

		printf("%d",x);
		x++;
	}

	for(int l=i-1;l>=1;l--){

		printf("%d",l);

	}


	printf("\n");
}


}
