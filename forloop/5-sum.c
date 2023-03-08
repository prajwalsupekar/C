#include<stdio.h>
void main(){
	int x,y,i,sum=0;
	printf("enter start of the range:");
	scanf("%d",&x);

	printf("enter end of the range:");
	scanf("%d",&y);

	for(i=x;i<=y;i++){
		if(i%5==0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
}
