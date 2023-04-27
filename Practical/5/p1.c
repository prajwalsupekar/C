//counting no. of char in sring.

#include<stdio.h>
int mystrlen (char *name){

	int count=0;

	while(*name!='\0'){

	count++;
	name++;
	}

	printf("count is %d",count);
}

	void main(){
	
		char *arr[]={};

		printf("enter string:\n");
		gets(arr);
		puts(arr);


		mystrlen(arr);


	}
