#include<stdio.h>
#include<stdlib.h>

typedef struct demo{
	int data;
	struct demo *next;
}dem;

	dem *head=NULL;

	void addNode(){
	
		dem *nNode=(dem*)malloc(sizeof(dem));
		
		printf("enter data");
		scanf("%d",&nNode->data);

		nNode->next=NULL;
		if(head==NULL){
			head=nNode;
		}
		else{
			dem* temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=nNode;
		}
	}
/*
	void locco(int num){
		dem *temp=head;
		int cnt1=1;
		int cnt2=0;

		while(temp!=NULL){

			iftemp

			

		}

	}
*/
void main(){

	int num;

	printf("enter no. of nodes");
	scanf("%d",&num);

	for(int i =1;i<=num;i++){
		
		addNode();
		
	}

	//printf("enter the no. you want to find");
	//scanf("%d",&num);

	//locco(num);



	}
