#include <stdio.h>
void main()
{
int x=0,y=0,z=0;

printf("enter 1 value:");
scanf("%d",&x);

printf("enter 2 value:");
scanf("%d",&y);

printf("enter 3 value:");
scanf("%d",&z);

if(x>y && x>z){
	printf("max no. is:%d",x);
}
	else if(y>x && y>z)
	{
	printf("max no. is:%d",y);
	}
	else{
	printf("max no. is:%d",z);
	}
}
