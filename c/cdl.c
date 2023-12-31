#include <stdio.h>
#include <stdlib.h>



struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data) {
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

int main() {
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    int data;
printf("Enter the value of node: ");
scanf("%d",&data);
root = newNode(data);

    printf("Preorder traversal of binary tree is \n");
    preOrder(root);
    return 0;
}

