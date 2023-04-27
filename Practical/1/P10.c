#include<stdio.h>
void main()
{
int dif;
char ch1,ch2;
printf("enter 1st character:");
scanf(" %c",&ch1);

printf("enter 2nd character:");
scanf(" %c",&ch2);

if(ch1==ch2){
	printf(" %c, %c",ch1,ch2);
}
	else {
		dif=ch1-ch2;
		printf("%d",dif);}





}
