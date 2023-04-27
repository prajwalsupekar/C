//WAP that allocates a 2D array of integers using malloc, and print it.


#include<stdio.h>
#include<stdlib.h>
void main(){

	int row=0;
	int col=0;

	printf("enter no. rows and col");
	scanf("%d %d",&row,&col);

	int **arr=(int**)malloc(row*sizeof(int*));
	
	printf("enter element in array");
	for(int i=0;i<row;i++){
		arr[i]=(int*)malloc(col*sizeof(int*));
			for(int j=0;j<col;j++){
				
				scanf("%d",&arr[i][j]);
			}
	}

	printf("the elements in array are");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
		printf("%d\n",*(*(arr+i)+j));
		}
	}
}
