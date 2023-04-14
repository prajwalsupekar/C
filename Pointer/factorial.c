#include<stdio.h>
void main()
{
int i,number,n=1;
printf("enter the no.=");
scanf("%d",&number);
for(i=1;i<=number;i++){
n=n*i;
}
printf("Factorial of %d is;%d",n,number);
}