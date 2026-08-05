#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node* create(int x){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=p->right=NULL;
    return p;
}

void preorder(struct node *r){
    if(r){
        printf("%d ",r->data);
        preorder(r->left);
        preorder(r->right);
    }
}

void inorder(struct node *r){
    if(r){
        inorder(r->left);
        printf("%d ",r->data);
        inorder(r->right);
    }
}

void postorder(struct node *r){
    if(r){
        postorder(r->left);
        postorder(r->right);
        printf("%d ",r->data);
    }
}

int main(){
    struct node *root=create(10);
    root->left=create(20);
    root->right=create(30);

    printf("Preorder: ");
    preorder(root);

    printf("\nInorder: ");
    inorder(root);

    printf("\nPostorder: ");
    postorder(root);

    return 0;
}
