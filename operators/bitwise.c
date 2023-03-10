#include<stdio.h>
void main()
{
int x=4;
int y=5;
int ans1;
int ans2;
int ans3;
int ans4;
int ans5;
int ans6;
ans1=x&y;
ans2=x|y;
ans3=x-- & ++y;
ans4=x ^ y;
ans5=x<<3;
ans6=y>>2;
printf("%d\n",ans1);
printf("%d\n",ans2);
printf("%d\n",ans3);
printf("%d\n",ans4);	
printf("%d\n",ans5);
printf("%d\n",ans6);
}