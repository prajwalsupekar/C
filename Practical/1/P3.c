#include<stdio.h>
void main()
{
int x,y,z;
 
printf("enter 1st value:");
scanf("%d",&x);

printf("enter 2nd value:");
scanf("%d",&y);

printf("enter 3rd value:");
scanf("%d",&z);


	if(x<y && x<z)
	{
	printf("min no. is %d",x);
	}
	
	else if(y<z && y<z){

		printf("min no. is %d",y);
	}

	else{
		printf("min no. id %d",z);
	}
}
