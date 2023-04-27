#include<stdio.h>
void main(){
int i,x,y=0,sum=0;
printf("enter no:");
scanf("%d",&x);

for(i=1;i<=x;i++)
{
	if(x%i==0)
	{
		y++;
		sum=sum+i;
		printf("the divisors are %d\n",i);
	}
}
printf("the count of divisors is %d\n",y);
printf("Additions of Divisors are %d\n",sum);
}
	
