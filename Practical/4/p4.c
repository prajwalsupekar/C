//free heap memo without using free


#include<stdio.h>
#include<stdlib.h>

void main(){

	int *ptr=(int*)malloc(4);
	*ptr=50;
	realloc(ptr,0);
	printf("%d",*ptr);
}
