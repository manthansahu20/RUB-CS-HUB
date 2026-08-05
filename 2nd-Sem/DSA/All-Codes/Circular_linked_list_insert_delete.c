#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head=NULL,*temp,*newnode;

int main(){
    int n,i,x;
    printf("Enter nodes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        if(head==NULL){
            head=temp=newnode;
            newnode->next=head;
        }else{
            newnode->next=head;
            temp->next=newnode;
            temp=newnode;
        }
    }

    printf("Insert value: ");
    scanf("%d",&x);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=head;
    temp->next=newnode;
    temp=newnode;

    printf("After Insert: ");
    temp=head;
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=head);

    head=head->next;
    temp->next=head;

    printf("\nAfter Delete: ");
    temp=head;
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=head);

    return 0;
}
