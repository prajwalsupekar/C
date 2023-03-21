#include<stdio.h>
void main()
{
	for(int i=1;i<=4;i++){
		char ch='A';
		for(int j=1;j<=4;j++){
			
			if(i%2!=0){
				printf("%c",ch);
			}

			else{
				printf("%c",ch+32);
			}

			ch++;
		}
		printf("\n");
			
		}
}
