#include<stdio.h>
void main(){
int x,y=0,z;

printf("enter no:");
scanf("%d",&x);
z=x;
//printf("%d and %d\n",x,z);
while(x>0){
	y++;
	//printf("%d",y);
	x=x/10;
}
printf("Number of digits in %d is %d",z,y);
}
