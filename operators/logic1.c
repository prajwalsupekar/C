#include<stdio.h>
void main()
{
int x;
int y;
int ans;
int ans1;
printf("enter 1 no.");
scanf("%d", &x);
printf("X:%d\n",x);
printf("enter 2 no.");
scanf("%d", &y);
printf("Y:%d\n",y);
//ans= x || y;
//ans= ++x && ++y;
ans= --x && ++y;
ans1= --x || ++y;
printf("%d\n",ans);
printf("%d\n",ans1);
printf("X:%d\n",x);
printf("Y:%d\n",y);
}