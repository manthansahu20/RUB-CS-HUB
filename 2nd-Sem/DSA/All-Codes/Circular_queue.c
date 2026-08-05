#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL,*newnode,*temp;

void enqueue(int x){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;

    if(front==NULL){
        front=rear=newnode;
        rear->next=front;
    }else{
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}

void dequeue(){
    if(front==NULL)
        return;

    temp=front;

    if(front==rear){
        front=rear=NULL;
    }else{
        front=front->next;
        rear->next=front;
    }

    free(temp);
}

void display(){
    if(front==NULL)
        return;

    temp=front;
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=front);
}

int main(){
    int n,i,x;

    printf("Enter no. of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&x);
        enqueue(x);
    }

    printf("Circular Queue: ");
    display();

    dequeue();

    printf("\nAfter Dequeue: ");
    display();

    return 0;
}
