#include <stdio.h>
void main()
{
int x,y=0,i;
printf("enter the no.");
scanf("%d",&x);

for(i=1;i<=x;i++)
	{	
	if(i%3!=0){
		y=y+i;
	}
	}
		printf("%d\n",y);

		
		}	



