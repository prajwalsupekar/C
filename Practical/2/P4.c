#include <stdio.h>
void main(){
int x,y,z;
printf("enter no:");
scanf("%d",&x);

if(x==1){
printf("%d is nor prime nor composite:");		
}
	else if(x%2==0 || x%3==0 || x%5==0 || x%7==0
			|| x%11==0 || x%13==0){
	printf("%d is composite number",x);
	}
else{

	printf("%d is prime number",x);
		}

}
