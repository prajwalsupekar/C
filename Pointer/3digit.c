#include<stdio.h>

void main(){

	int n=0;
	
	fprintf(stdout,"enter no. of elements\n");
	fscanf(stdin,"%d",&n);
	
	int arr[n];
	fprintf(stdout,"enter elemts\n");
	for(int i=0;i<n;i++){

		fscanf(stdin,"%d",&arr[i]);	
	
		}
	
	for(int i=0;i<n;i++){
			
		if(arr[i]>=100 && arr[i]<=999){
			fprintf(stdout,"%d\n",arr[i]);
		}
			
		
	}
}
	

	
