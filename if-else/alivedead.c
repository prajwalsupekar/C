#include<stdio.h>
void main()
{
char ch;
printf("are you alive\n");
printf("enter y or x\n");

scanf("%c", &ch);
if(ch== 'y' || ch=='x')
{
printf("nice\n");
}
else{
printf("user died\n");
}

}