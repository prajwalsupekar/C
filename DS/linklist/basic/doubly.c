
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
        struct node *prev;
        int data;
        struct node *next;
}node;
node*head=NULL;

node *createnode(){
        node *newnode=(node*)malloc(sizeof(node));
        newnode->prev=NULL;
        printf("Enter the data\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        return newnode;
}

void addnode(){
        node *newnode=createnode();
        if(head==NULL){
                head=newnode;
        }else{
                node *temp=head;
                while(temp->next!=NULL){
                        temp=temp->next;
                }
                temp->next=newnode;
                newnode->prev=temp;
        }
}
void printnode(){
        if(head==NULL){
                printf("There is no data");
        }else{
                node *temp=head;
                while(temp->next!=NULL){
                        printf("| %d |<-->",temp->data);
                        temp=temp->next;
                }
                printf("| %d |",temp->data);
        }
        printf("\n");
}
void addatfirst(){
        node *newnode=createnode();
        if(head==0){
                head=newnode;
        }else{
                newnode->next=head;
                head->prev=newnode;
                head=newnode;
        }
}
void addlast(){
	node *newnode=createnode();
        if(head==NULL){
                head=newnode;
        }else{
                node *temp=head;
                while(temp->next!=NULL){
                        temp=temp->next;
                }
                temp->next=newnode;
                newnode->prev=temp;
        }
}

int countnode(){
        node *temp=head;
        int count=0;
        while(temp!=NULL){
                count++;
                temp=temp->next;
        }
        return count;
}
void addatpos(int pos){
        int count=countnode();
        if(pos<=0 || pos>=count+2){
                printf("Invalid location\n");
        }else {
                if(pos==1){
                        addatfirst();
                }else if(pos==count+1){
                        addnode();
                }else{
                        node *newnode=createnode();
                        node *temp=head;
                        while(pos-2){
                                temp=temp->next;
                                pos--;
                        }
                        newnode->next=temp->next;
                        newnode->prev=temp;
                        temp->next->prev=newnode;
                        temp->next=newnode;
                }
        }
}
void deletefirst(){
        int count=countnode();
        if(head==NULL){
                printf("There is no data\n");
        }if(count==1){
                free(head);
                head=NULL;
        }else{
                head=head->next;
                free(head->prev);
                head->prev=NULL;
        }
}

void deletelast(){
        int count=countnode();
        if(head==NULL){
                printf("there is no data for deleting\n");
        }else if(count==1){
                free(head);
                head=NULL;
        }else{
                node *temp=head;
                while(temp->next->next!=NULL){
                        temp=temp->next;
                }
                free(temp->next);
                temp->next=NULL;
        }
}
void deleteatpos(int pos){
        int count=countnode();
       // printf("Count of node=%d\n",count);
        if(pos<=0 || pos>count){
                printf("This is the invalid position you want to delete\n");
        }else{
                if(pos==1 && count>1){
                        node* temp=head;
                        head=temp->next;
                        free(head->prev);
                        head->prev=NULL;
                }else if(pos==count){
                        if(count==1){
                                free(head);
                                head=NULL;
                        }else{
                                node *temp=head;
                                while(temp->next!=NULL){
                                        temp=temp->next;
                                }
                                temp->prev=NULL;
                                free(temp);
                        }
                }else{
                        node*temp1=head;
                        node*temp2;
                        while(pos-2){
                                temp1=temp1->next;
                                pos--;
                        }
                        temp2=temp1->next->next;
                        temp1->next->next=temp1;
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
                if(count==0 && (ch==5 || ch==6 || ch==9)){
                        printf("Count node is =%d\n",count);
                        printf("Therefore is no node for deleting & printing\n");
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
                                        addatfirst();
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
                                        deletefirst();
                                        break;
                                case 6:
                                        deletelast();
                                        break;
                                case 7:{
                                        int num;
                                        printf("enter the node number you want to delete\n");
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
