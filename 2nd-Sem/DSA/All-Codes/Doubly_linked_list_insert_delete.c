#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev,*next;
}*head=NULL,*temp,*newnode;

int main(){
    int n,i,x;

    printf("Enter nodes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            newnode->prev=NULL;
            head=temp=newnode;
        }else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
    }

    printf("Insert: ");
    scanf("%d",&x);

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;

    printf("After Insert: ");
    temp=head;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }

    temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);

    printf("\nAfter Delete: ");
    temp=head;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }

    return 0;
}
