#include<stdio.h>
void main()
{
int a,b,c;
printf("enter 1 no:");
scanf("%d",&a);

printf("enter 2nd no:");
scanf("%d",&b);

printf("enter 3rd no:");
scanf("%d",&c);

if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
	{
	printf("the numbers are Pythagorus triplets");
	}
else
	{
		printf("ther are not Pythagorus triplets");
	}


}
