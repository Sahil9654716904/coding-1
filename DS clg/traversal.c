#include<stdio.h>
#include<stdlib.h>

struct Node {
    char data ;
    struct  Node* left ;
    struct Node *right;

};

struct Node* creatNode( char data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if(newNode == NULL){

        printf("overflow \n ");

        exit (1);

    }

    newNode ->data = data ;
    newNode -> left =NULL;
    newNode -> right = NULL;
    return newNode ;
}

int preorderTraversal (struct Node * root){

   if (root ==NULL)  
   return 0 ;
   printf ("%c" , root -> data);
   preorderTraversal(root -> left);
       preorderTraversal(root -> right);
       return 1 ;
}

int inorderTraversal(struct Node *root)
{

    if (root == NULL)
        return 0;

    inorderTraversal(root->left);
    printf("%c", root->data);
    inorderTraversal(root->right);

    return 1;
}
int postorderTraversal(struct Node *root)
{

    if (root == NULL)
        return 0;
    
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%c", root->data);
    return 1;
}

int main(){

    struct Node* root = creatNode('A');
    root -> left = creatNode('B');
    root-> right = creatNode('C');
    root-> left-> left = creatNode('D') ;
    root-> left -> right = creatNode('E');
    root->right->left = creatNode('G');
    root->right ->right = creatNode('H');
    root->left->right-> left = creatNode('F');
    root->right->right -> left = creatNode('J');
    root->right->right ->right = creatNode('K');


printf("PREORDER TRAVERSAL :");

preorderTraversal(root);
printf("\n");

printf("postorder TRAVERSAL :");

postorderTraversal(root);
printf("\n");
printf("inorder TRAVERSAL :");

inorderTraversal(root);
printf("\n");


}