#include<stdio.h>
void main(){
int x;
float temp,root;

	printf("enter number:");
	scanf("%d",&x);

root=x/2; //store half of x in root
temp=0;

while(root!=temp){

temp=root;
root=(x/temp +temp)/2;}

printf("the sr root of %d is %f",x,root);



}
