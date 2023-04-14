#include<stdio.h>

	
	int *fun(int x,int y){
		
		printf("%d\n",x+y);   
		int val;
		val=x+y;
		return &val;

	}

	void main()
	{
		
		int *ptr=fun(10,20);
		printf("%p\n",ptr);
		printf("%d",*ptr);




}
