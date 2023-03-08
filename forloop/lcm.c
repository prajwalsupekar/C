#include<stdio.h>
void main(){
	int x,y,max;
	printf("enter 1st no:");
	scanf("%d",&x);

	printf("enter 2nd no:");
	scanf("%d",&y);

/*	if(x>y)
	{
		max=x;
	}
	else
	{
		max=y;
	}*/


	for(max=1;;max++)
		if(max%x==0 && max%y==0){
			printf("LCM of %d & %d is %d",x,y,max);
			break;
		}
	
}	
