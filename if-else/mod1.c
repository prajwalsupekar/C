#include<stdio.h>
void main()
{
int x;
int y;
printf("enter value\n");
scanf("%d", &x);

if( x%4==0 && x%5==0)	
{
printf("%d is divisible by 4 and 5\n",x);
}
else
{
printf("%d is not divisilble by 4 and 5\n",x);
}
printf("enter value\n");
scanf("%d", &y);

if( x%2==0)	
{
printf("%d is divisible by 2",y);
}
}