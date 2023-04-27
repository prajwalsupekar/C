#include<stdio.h>
void main()
{
int x,y,z=0,sum=1;

printf("enter no:");
scanf("%d",&x);
while(x!=0){
	y=x%10;
	sum=sum*y;
	x=x/10;
	
}

printf("Product of digits is %d\n",sum);



}

