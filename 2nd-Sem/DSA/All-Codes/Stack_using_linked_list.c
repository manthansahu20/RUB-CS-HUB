#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*top=NULL,*newnode,*temp;

void push(int x){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}

void pop(){
    if(top==NULL)
        printf("Stack Underflow\n");
    else{
        temp=top;
        top=top->next;
        free(temp);
    }
}

void display(){
    temp=top;
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
        push(x);
    }

    printf("Stack: ");
    display();

    pop();

    printf("\nAfter Pop: ");
    display();

    return 0;
}
