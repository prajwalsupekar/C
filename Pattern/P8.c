#include<stdio.h>
void main(){
	int x,i,j,y=1,z=1;

	printf("enter no of rows:");
	scanf("%d",&x);

	for(i=1;i<=x;i++){
		for(j=y;j<=z+5;j++){
			if(j%2!=0)
			{
				printf(" %d",j);
			}
			
			y++;}
		z=y;
	

		printf("\n");

	}
}
