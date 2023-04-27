//enter numbers and find sq of even and cubes of odd



#include<stdio.h>

void main(){

	int n;

	printf("enter no. of digits\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements:\n");
	for(int i=0;i<n;i++){

		scanf("%d",&arr[i]);
	}
	int x;
	 for(int i=0;i<n;i++){
		if(arr[i]%2==0){
		printf("%d ",arr[i]*arr[i]);		

		}
		else{

			printf("%d ",arr[i]*arr[i]*arr[i]);
		}
	 }

	
}
