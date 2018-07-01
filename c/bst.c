#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *left;
    struct node *right;

}*root=NULL,*temp=NULL;

struct node* getNode(int data)
{
struct node *nn = (struct node *)malloc(sizeof(struct node));
  nn->data=data;
  nn->left=NULL;
  nn->right=NULL;

  return nn;
}
struct node* insert(struct node * node,int item)
{
  

  if(node == NULL)
  {
      return getNode(item);
  }
  else
  {
      if(item < node->data)
      {
          node->left = insert(node->left,item);
      }
      else
      {
          node->right = insert(node->right,item);

      }
  }
  return node;

}



void preorder(struct node *tem)
{
   if(tem!=NULL)
   {
       printf("%d ",tem->data);
       preorder(tem->left);
       preorder(tem->right);
   }
}

void postOrder(struct node *temp)
{
    if(temp!=NULL)
    {
        postOrder(temp->left);
        postOrder(temp->right);
        printf("%d ",temp->data);
    
    }
}


void main()
{
    
    root = insert(root,4);
    insert(root,5);
    insert(root,22);
    insert(root,33);
    //preorder(root);
    //printf("\n");
    postOrder(root);
}