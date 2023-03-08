#include<stdio.h>
void main()
{
	int x,y,i;
	float reci;
	 printf("enter starting of range");
	 scanf("%d",&x);

	 printf("enter ending of the range:");
	 scanf("%d",&y);

	 for(i=x;i<=y;i++){
		reci=(float)1/i;
		printf("%d=%lf\n",i,reci);
	 }
}
