#include<stdio.h>
void main(){

	int arr[3][3];
	int i,j;
	int sum=0;

	printf("enter elemnts in array");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		scanf("%d",&arr[i][j]);
		}

	}

	for(i=0;i<3;i++){

		for(j=0;j<3;j++){
		if(i==j){

			sum=sum+arr[i][i];
		}
		
	}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){

		if(i+j==2){

			if(i==j){

			}
			else{
		sum=sum+arr[i][j];



			}
		}
		}


	}



printf("sum=%d",sum);

}
