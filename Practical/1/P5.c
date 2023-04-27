#include<stdio.h>
void main()
{
int x;
printf("enter no. from 0-5:");
scanf("%d",&x);

switch(x)
{
	case 1:
		printf("One");
		break;
	case 2:
		printf("two");
		break;
	case 3:
		printf("three");
		break;
	case 4:
		printf("four");
		break;
	case 5:
		printf("five");
		break;
	default:
		printf("entered number si greater than five");
		break;
}



}

