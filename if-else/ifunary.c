#include<stdio.h>
void main()
{
int x=1;
printf("start code\n");

if(--x)
{
printf("in first block\n");
}
 if(++x || x++)
 {
 printf("in the second block\n");
 }
 
 printf("%d\n",x);
 printf("end code\n");
 }