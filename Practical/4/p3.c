//take float value using malloc and diaply it


#include<stdio.h>
#include<stdlib.h>
void main()
{

	float *ptr=(float*)malloc(4);
	*ptr=60.67;
	printf("%f",*ptr);
		
}

