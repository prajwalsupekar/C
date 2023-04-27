
//write a program to take slary n diplay them using malloc

#include<stdio.h>
#include<stdlib.h>
void main(){

	float *ptr = (float*)malloc(4);

	for(int i=0;i<4;i++){

		scanf("%f",ptr+i);
	}


	for(int i=0;i<4;i++){

		printf("%f\n",*(ptr+i));
	}


}
