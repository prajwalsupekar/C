#include<stdio.h>
void main(){
int p,r,c;
int sum=0;

printf ("enter plane rows and col:");
scanf("%d %d %d",&p,&r,&c);

	int arr[p][r][c];//{{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18}};
	int i,j,k;
	printf("enter elemnts in array\n");

	for(i=0;i<p;i++){
		for(j=0;j<r;j++){
			for(k=0;k<c;k++){

				scanf("%d",&arr[i][j][k]);
			}
		}
	}


	for(i=0;i<p;i++){
		printf("plane:%d\n",i);
		for(j=0;j<=0;j++){
			for(k=0;k<c;k++){
				//if(j==0){
				sum=sum+arr[i][j][k];
				

				//printf(" %d",arr[i][j][k]);
			}
			printf("\n");
		}
	}


printf("sum=%d",sum);


}
