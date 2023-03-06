#include<stdio.h>
void main(){
int size,i;
int flag=0;

printf("enter size of array:");
scanf("%d",&size);

int arr[size];
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	printf("elements divisible by 4 are:\n");
	for(i=0;i<size;i++){
	if(arr[i]%4==0)
	{
		printf("%d\n",arr[i]);
	}
	}



}
