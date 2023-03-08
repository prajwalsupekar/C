#include<stdio.h>
void main(){


char ch;
int x,i,j,k;

printf("enter no. of rows:");
scanf("%d",&x);
//ch=64+x;
for(i=1;i<=x;i++){
	ch=64+x;
	for(j=1;j<=x-i;j++){
		printf(" ");}
		for(k=1;k<=i;k++){
			if(k%2==1){
			printf("%c",ch);
			}
			
			else{
				printf("%c",ch+32);
			}
			ch=ch-1;

		}

	
		printf("\n");

}

}



