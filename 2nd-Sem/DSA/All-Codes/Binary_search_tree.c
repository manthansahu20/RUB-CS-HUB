#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node* insert(struct node *root,int x){
    if(root==NULL){
        root=(struct node*)malloc(sizeof(struct node));
        root->data=x;
        root->left=root->right=NULL;
        return root;
    }
    if(x<root->data)
        root->left=insert(root->left,x);
    else
        root->right=insert(root->right,x);
    return root;
}

void inorder(struct node *root){
    if(root){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int main(){
    struct node *root=NULL;
    int n,i,x;

    printf("Enter no. of nodes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&x);
        root=insert(root,x);
    }

    printf("Inorder: ");
    inorder(root);

    return 0;
}
