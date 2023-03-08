#include<stdio.h>
void main(){

	int i,j,k;
	int rows;
	char ch1;
	//int x=64;
	printf("enter no. of rows:");
	scanf("%d",&rows);
int y=2;
int x=64;
for(i=1;i<=rows;i++){
ch1=x;
	if(i<=3){
		for(j=i*2-1;j>=1;j--){
			printf("%c",ch1+j);
		
		}
		
		}
	else{
		
		for(k=rows-y;k>=1;k--){
			printf("%c",ch1+k);
		}

	
	

	y=y+2;
	}
	printf("\n");
	}
}
