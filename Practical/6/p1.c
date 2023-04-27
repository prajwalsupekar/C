//WAP that dynamically allocates 1D array of marks,takes values from the user,print it.


#include<stdio.h>
#include<stdlib.h>
void main(){

	int size=0;

	printf("enter size of array:");
	scanf("%d",&size);

	float *arr=(float*)malloc(size*sizeof(float));
	
	for(int i=0;i<size;i++){

		printf("enter element at %d index:",i);
		scanf("%f",arr+i);
	}

	printf("Array of marks:\n");

	for(int i=0;i<size;i++){
		
		printf("%f\n",*(arr+i));
	
	}

	free(arr);

}
