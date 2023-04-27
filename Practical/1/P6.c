#include<stdio.h>
void main()
{
int x,sum=0,i;
float avg=0;

printf("enter 10 numbers");
//scanf("%d",&x);

for(i=1;i<=10;i++)
	{
	scanf("%d",&x);
	sum=sum+x;}
	avg=(float)sum/10;
	
printf("sum=%d\n",sum);
printf("Average=%f\n",avg);

}
