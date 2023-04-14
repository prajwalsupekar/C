#include<stdio.h>  
int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    //get number
scanf("%d",&n);    
temp=n;                         //store it in var
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;                 //reverse it     
n=n/10;       
}    
if(temp==sum)                   //compare it with orignal
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   

