//combine two strings from user.


#include<stdio.h>
char *mystrcat(char *arr1,char *arr2){

		while(*arr1!='\0'){
			arr1++;

		}

		while(*arr2!='\0'){
			
			*arr1=*arr2;
			arr1++;
			arr2++;	
		}
		*arr1='\0';
		return arr1;

}

	void main(){
		
		char arr1[30];
		char arr2[10];

		printf("enter 1stt string\n");
		gets(arr1);

		printf("enter 2nd string\n");
		//scanf("%s",&arr2);
		gets(arr2);

		mystrcat(arr1,arr2);
		printf("%s",arr1);
			
	}
