#include<stdio.h>
void main(){
	char ch1,ch2,dif;

	printf("enter characters:");
	scanf(" %c %c",&ch1,&ch2);

	if(ch1==ch2){
		printf(" %c & %c are same",ch1,ch2);
	}
	else{
		if(ch1>ch2){
			dif=ch1-ch2;
			printf("%d",dif);
		}
		else{
			dif=ch2-ch1;
			printf("%d",dif);
		}
	}
		

}

