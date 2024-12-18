
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};
 
 struct node *create()
 {
     struct node *newnode;
     int x;
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("Enter the data(-1 for no node)");
     scanf("%d",&x);
     if(x==-1)
     {
         return 0;
         
     }
     newnode->data=x;
     printf("Enter the left child of %d:",x);
     newnode->left=create();
     printf("Enter the right child of %d:",x);
      newnode->right=create();
      return newnode;
     
 }
 
 void inorder(struct node *root)
 {
    if (root == NULL)
    {
        return;
    }
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
 
  void preorder(struct node *root) {
    if (root == NULL) 
    {
        return;
    }
        
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
 
  void postorder(struct node *root) 
  {
    if (root == NULL)
    {
        return;
    }
        postorder(root->left);
        postorder(root->right);
        
        printf("%d ", root->data);
    }
 

int main()
{
    struct node *root;
    root=0;
    root=create();
    printf("Inorder of Tree is:\n");
    inorder(root);
    printf("Preorder of Tree is:\n");
    
    preorder(root);
     printf("Postorder of Tree is:\n");
    postorder(root);
    return 0;
}




