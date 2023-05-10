/* Singlly circular linked list */
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *head=NULL;
node* createnode(){
	node *newnode=(node*)malloc(sizeof(node));
	printf("Enter data\n");
	scanf("%d",&newnode->data);

	newnode->next=NULL;

	return newnode;
}
void addnode(){
	node *newnode=createnode();
	if(head==NULL){
		head=newnode;
		newnode->next=head;
	}else{
		node *temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		newnode->next=head;
		temp->next=newnode;
	}
}
void printnode(){
	if(head==NULL){
		printf("SCLL is empty");
	}else{
		node *temp=head;
		while(temp->next!=head){
			printf("| %d |->",temp->data);
			temp=temp->next;
		}
		printf("| %d |",temp->data);
	}
	printf("\n");
}
int countnode(){
	int count=0;
	if(head==NULL){
		return -1;
	}else{
		node *temp=head;
		while(temp->next!=head){
			count++;
			temp=temp->next;
		}

		if(temp->next==head)
			count++;
		}

	return count;

}
void addfirst(){
	node *newnode=createnode();
	if(head==NULL){
		head=newnode;
		newnode->next=head;
	}else{
		node *temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=head;
		head=newnode;
	}
}
void addlast(){
	addnode();
}

void addatpos(int pos){
	int count=countnode();
	if(pos<=0 || pos>=count +2){
		printf("You entered the wrong data\n");
	}else{
		if(pos==1)
			addfirst();
		else if(pos==count+1)
			addnode();
		else{
			node *newnode=createnode();
                        node *temp=head;
                        while(pos-2){
                                temp=temp->next;
                                pos--;
                        }
                        newnode->next=temp->next;
                        temp->next=newnode;
                }
	}
}

void delfirst(){
	int count=countnode();
	if(head==NULL){
		printf("Empty Linked list\n");
	}else{
		if(count==1){
			free(head);
			head=NULL;
		}else{
			node *temp=head;
			while(temp->next!=head){
				temp=temp->next;
			}
			head=head->next;
			free(temp->next);
			temp->next=head;
		}
	}
}

void dellast(){
	int count=countnode();
	if(head==NULL){
		printf("linked list is emptyt\n");
	}else{
		if(count==1){
			free(head);
			head=NULL;
		}else{
			node *temp=head;
			while(temp->next->next!=head){
				temp=temp->next;
			}
			free(temp->next);
			temp->next=head;
		}
	}
}
void deleteatpos(int pos){
	int count=countnode();
	if(pos<=0 || pos >count){
		printf("You entered the wrong data\n");
	}else{
		if(pos==1){
			delfirst();
		}else if(pos==count){
			dellast();
		}else{
			node *temp1=head;
			node *temp2;
			while(pos-2){
				temp1=temp1->next;
				pos--;
			}
			temp2=temp1->next->next;
			free(temp1->next);
			temp1->next=temp2;
		}
	}
}
void main(){
        int ch;
        char choice;
        do{
                printf("1.addnode\n");
                printf("2.addfirst\n");
                printf("3.addlast\n");
                printf("4.addatposition\n");
                printf("5.deletefirst\n");
                printf("6.deletelast node\n");
                printf("7.deleatpos node\n");
                printf("8.countnode\n");
                printf("9.printnode\n");
                printf("10.exit\n");

                printf("Enter choice:\n");
                scanf("%d",&ch);
                int count=countnode();
                if(count==0 && (ch==5 || ch==6 || ch==7 || ch==9)){
                        printf("Count node is =%d\n",count);
                        printf("Therefore is no node for Performing operations\n");
                }else{
                        switch(ch){
                                case 1:
                                        {

                                                int num;
                                                printf("How many node do you want to add\n");
                                                scanf("%d",&num);
                                                for(int i=1;i<=num;i++){
                                                        addnode();
                                                }
                                        }
                                        break;

                                case 2:
                                        addfirst();
                                        break;
                                case 3:
                                        addlast();
                                        break;
                                case 4:
                                        {
                                                int pos;
                                                printf("Enter the postion where you want you add node\n");
                                                scanf("%d",&pos);
                                                addatpos(pos);
                                        }
                                        break;
                                case 5:
                                        delfirst();
                                        break;
                                case 6:
                                        dellast();
                                        break;
                                case 7:{
                                        int num;
                                        printf("enter the position  you want to delete\n");
                                        scanf("%d",&num);
                                        deleteatpos(num);
                                       }
                                        break;
                                case 8:
                                        printf("Count of nodes is=%d\n",countnode());
                                        break;
                                case 9:
                                        printnode();
                                        break;
                                case 10:
                                        break;
                                default:
                                        printf("Wrong choices\n");
                                }

                        }
                if(ch!=10){
                        getchar();
                        printf("Do you want to continue:\n");
                        scanf("%c",&choice);
                }
        }while(ch!=10 && (choice=='Y' || choice=='y'));
}
