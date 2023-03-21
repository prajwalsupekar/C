#include<stdio.h>
void main()
{
	int i,j,x;
	char ch2,ch1='A';

	printf("enter no. of rows:");
	scanf("%d",&x);
	ch2=ch1;
	for(i=1;i<=x;i++){
			ch2=ch1;
		for(j=i;j<=i+3;j++){
			printf(" %c",ch2);
			ch2++;	

		}
		ch1++;

	
		printf("\n");
		

		
	}
}
