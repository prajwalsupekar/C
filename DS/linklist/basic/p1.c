#include<stdio.h>
#include<stdlib.h>
typedef struct movie{
	char mName[20];
	float imdb;
	struct movie *next;
}mov;

mov *head=NULL;

void addNode(){
	mov *newNode=(mov*)malloc(sizeof(mov));
	printf("enter movie name");
	fgets(newNode->mName,17,stdin);

	printf("enter imdb rating");
	scanf("%f",&newNode->imdb);
	getchar();

	newNode->next=NULL;

	if(head==NULL){
		head=newNode;
	}
	else{
		mov *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
}

void print(){

	mov *temp=head;
	while(temp!=NULL){
		printf("%s",temp->mName);
		printf("%f",temp->imdb);
		printf("\n");
		temp=temp->next;
	}

}

void main(){

	addNode();
	addNode();
	addNode();
	print();
}
