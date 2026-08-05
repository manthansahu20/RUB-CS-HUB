#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL,*newnode,*temp;

void enqueue(int x){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;

    if(front==NULL)
        front=rear=newnode;
    else{
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue(){
    if(front==NULL)
        printf("Queue Empty\n");
    else{
        temp=front;
        front=front->next;
        free(temp);
    }
}

void display(){
    temp=front;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main(){
    int n,i,x;

    printf("Enter no. of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&x);
        enqueue(x);
    }

    printf("Queue: ");
    display();

    dequeue();

    printf("\nAfter Dequeue: ");
    display();

    return 0;
}
