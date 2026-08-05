#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head=NULL,*temp,*newnode;

void create(int n){
    int i;
    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
            head=temp=newnode;
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
}

void display(){
    temp=head;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void search(int key){
    temp=head;
    while(temp){
        if(temp->data==key){
            printf("Found");
            return;
        }
        temp=temp->next;
    }
    printf("Not Found");
}

void insert(int x){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=head;
    head=newnode;
}

void del(){
    if(head){
        temp=head;
        head=head->next;
        free(temp);
    }
}

void reverse(){
    struct node *prev=NULL,*cur=head,*next;
    while(cur){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    head=prev;
}

int main(){
    int n,key,x;
    printf("Enter no. of nodes: ");
    scanf("%d",&n);
    create(n);

    printf("List: ");
    display();

    printf("\nSearch: ");
    scanf("%d",&key);
    search(key);

    printf("\nInsert value: ");
    scanf("%d",&x);
    insert(x);
    display();

    printf("\nAfter Delete: ");
    del();
    display();

    reverse();
    printf("\nAfter Reverse: ");
    display();

    return 0;
}
