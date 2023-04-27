//WAP that accepts num for user from that num sorts digits in ascending order


#include<stdio.h>

int count=0;
void sortArray(int arr[]){

	for(int i=0;i<count;i++){
		for(int j=0;j<count-1;j++){
			if(arr[j]<arr[j+1]){
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}

	for(int i=0;i<count;i++){
		printf("%d",arr[i]);
	}
}

void main()
	{
	
	int x;
	printf("enter the number:\n");
	scanf("%d",&x);
	
	int temp=x;
	while(temp!=0){
		temp=temp/10;
		count++;
	}

	int arr[count];


	int rem=0;
	int i=0;
	while(x!=0){
	
		rem=x%10;
		arr[i]=rem;
		i++;
		x=x/10;

	}
	sortArray(arr);

}

