#include<stdio.h>
void main(){
	int f=1,i,x;

	printf("enter the no.");
	scanf("%d",&x);

	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	printf("%d",f);
}
