#include<stdio.h>
void main()
{
float marks;
printf("Enter your marks:\n");
scanf("%f",&marks);
printf("Your marks:%f\n",marks);

if(marks>60 && marks<70)
printf("you will get a cycle");

if(marks>71 && marks<80)
printf("you will get a phone");

if(marks>81 && marks<90)
printf("you will get a laptop");

if(marks>91 && marks<100)
printf("you will get a bike");
}