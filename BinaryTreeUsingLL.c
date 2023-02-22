#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

typedef struct node Node;

Node* createnode(int value){
    Node* newnode=malloc(sizeof(Node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

Node* insertleft(Node* root,int value){
    root->left=createnode(value);
    return root->left;
}


Node* insertright(Node* root,int value){
    root->right=createnode(value);
    return root->right;
}

void inorder(Node* root){
    if(root==NULL)return;
    inorder(root->left);
    printf("%d",root->data);    
    inorder(root->right);
}
void preorder(Node* root){
    if(root==NULL)return;
    printf("%d",root->data);
    preorder(root->left);
        
    preorder(root->right);
}

void postorder(Node* root){
    if(root==NULL)return;
    postorder(root->left);
        
    postorder(root->right);
    printf("%d",root->data);
}


int main(){
    Node* root=createnode(50);
    insertleft(root,20);
    insertright(root,30);
    insertleft(root->left,40);
    insertright(root->left,10);
    printf("inorder traversal:\n");
    inorder(root);
    printf("\npreorder traversal:\n");
    preorder(root);
    printf("\npostorder traversal:\n");
    postorder(root);
    return 0;
}
