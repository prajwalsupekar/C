#include<stdio.h>
void main(){
	int x,y,i;
	printf("enter start of the range:");
	scanf("%d",&x);

	printf("enter end of the range:");
	scanf("%d",&y);
	printf("even no:");
	for(i=y;i>=x;i--){

		if(i%2==0){
			printf(" %d",i);
		}
	}printf("\n\n");
	printf("odd no:");

	for(i=x;i<=y;i++){
		if(i%2!=0){
		printf(" %d",i);}
	}
}
