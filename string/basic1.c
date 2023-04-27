#include<stdio.h>

void main(){
		
	char carr[]={'p','r','a','j','w','a','l'};

	char *str="prajwal";

	printf("%s\n",carr);
	printf("%s\n",str);

 	carr[4]='3';
	printf("%c\n",*str);
	printf("%s\n",carr);
}
