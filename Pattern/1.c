#include<stdio.h>
void main()
{
int i,x,j;
printf("enter value of x:");
scanf("%d",&x);

for(i=1;i<=x;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}

}