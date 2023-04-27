//Dangling pointer using malloc


#include<stdio.h>
#include<stdlib.h>

//int *ptr


void main(){

	int *aptr=(int*)malloc(4);
	*aptr=10;
	int *bptr=aptr;
	printf("%d",*aptr);
	free(aptr);
	printf("%d",*bptr);


}
