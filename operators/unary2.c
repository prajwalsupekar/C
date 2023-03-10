#include<stdio.h>
int x=5;
void main()
{
int y=7;
int output;
printf("%d\n",x);
printf("%d\n",y);
printf("%d\n",output);
output=++x + y++ + x++ + ++y;
//output = ++x - ++y + x++ - y--;
printf("%d\n",x);
printf("%d\n",y);
printf("%d\n",output);
}
