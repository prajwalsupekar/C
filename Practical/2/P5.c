#include<stdio.h>
void main()
{
int x,y,i,j;
printf("start range:\n");
scanf("%d",&x);

printf("end range:\n");
scanf("%d",&y);

for(i=y;i>=x;i--){

	
	if(i%2==0){
	printf("%d",i);

}
}
printf("\n");
for(j=x;j<=y;j++){
if(j%2!=0){
	printf("%d",j);
}

}

}
