#include<stdio.h>
void main(){

int i,j,x;

printf("enter no. of elements:");
scanf("%d",&x);

int arr1[x],arr2[x];
printf("enter elements in array:");

	for(i=0;i<x;i++){
	scanf("%d",&arr1[i]);
	arr2[i]=arr1[i];
	}

	for(i=0;i<x;i++){
	for(j=0;j<x;j++){
			
		if(arr2[i]>arr1[j]){     //swapping
		int temp=arr2[i];
		arr2[i]=arr2[j];
		arr2[j]=temp;
		}

			}

	}
	printf("second largest element in the array is %d",arr2[x-2]);


}
