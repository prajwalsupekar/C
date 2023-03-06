#include<stdio.h>
void main(){

int size;
//int arr[size];

printf("enter size of array\n");
scanf("%d",&size);

int arr[size];
printf("enter elemnts in array\n");
for(int i=0;i<size;i++){
	scanf("%d",&arr[i]);
}
printf("elements are:\n");

for(int i=0;i<size;i++){
	printf("%d\n",arr[i]);
}

}
