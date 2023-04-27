#include<stdio.h>
void main()
{
int x,y,z=0,sum=0;

printf("enter no:");
scanf("%d",&x);
while(x!=0){
	y=x%10;
	sum=sum+y;
	x=x/10;
	
}

printf("sum of digits is %d\n",sum);



}
