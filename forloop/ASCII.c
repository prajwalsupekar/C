#include<stdio.h>
void main(){
	int i;
	char ch;

	for(i=1;i<=127;i++)
	{
		ch=i;
		if(ch%2==0){
			printf("%c\n",ch);
		}
	}
}
