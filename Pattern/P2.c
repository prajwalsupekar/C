#include<stdio.h>
void main(){
	int i,j,k,x;
	//char ch1='a';
	printf("enter no.of rows:");
	scanf("%d",&x);

	for(i=1;i<=x;i++)
	{
		if(i%2!=0){
			for(j=1;j<=x-1;j++)
			{
				printf("%d",j);
			}
		}
			else{
				char ch1='a';
				for(k=1;k<=x-1;k++)
				{
				
					printf("%c",ch1);
					ch1++;
				}
			}
		printf("\n");	
	}
}
