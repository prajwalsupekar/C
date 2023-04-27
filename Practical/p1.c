#include<stdio.h>
void main(){

	int i,x;

	printf("enter number:");
	scanf("%d",&x);
	int arr[10];
	for(i=0;i<10;i++){
	
		arr[i]=x*(i+1);
	
		printf("%d\n",*(arr+i));
	}


}
