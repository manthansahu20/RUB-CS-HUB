#include<stdio.h>
#include<stdlib.h>

struct node{
    int coef,exp;
    struct node *next;
}*head=NULL,*temp,*newnode;

int main(){
    int n,i;

    printf("Terms: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Coefficient Exponent: ");
        scanf("%d%d",&newnode->coef,&newnode->exp);
        newnode->next=NULL;

        if(head==NULL)
            head=temp=newnode;
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }

    printf("Polynomial: ");
    temp=head;
    while(temp){
        printf("%dx^%d",temp->coef,temp->exp);
        if(temp->next)
            printf(" + ");
        temp=temp->next;
    }

    return 0;
}
