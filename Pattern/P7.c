#include<stdio.h>
void main(){
int x,y=1,i,j,z=1;

printf("enter no. of rows:");
scanf("%d",&x);

for(i=1;i<=x;i++)
	{
		for(j=y;j<=x*i;j++)
		{
			if(j%2!=0){
				z=j*j;
				printf("   %d",z);
			}
			if(j%2==0){
				printf("   %d",j);
			}
			y++;
		}
		printf("\n");
	}
}
