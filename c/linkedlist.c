#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
}*root=NULL,*temp=NULL;

void insert(int data)
{
  struct node *nn = (struct node *)malloc(sizeof(struct node));
  nn->data=data;
  nn->next=NULL;
  if(root == NULL)
  {
      root = nn;
  }
  else
  {
      temp = root;
      while(temp->next!=NULL)
      {
          temp = temp->next;
      }
      temp->next=nn;

  }

}

void insertBeg(int data)
{
  struct node *nn = (struct node *)malloc(sizeof(struct node));
  nn->data=data;
  nn->next=NULL;
  if(root == NULL)
  {
      root = nn;
  }
  else
  {
      nn->next=root;
      root = nn;

  }

}

void display()
{
    temp = root;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void reverse(struct node *temp)
{
    if(temp == NULL){
        return ;
    }
    
    reverse(temp->next);
    printf("%d  ",temp->data);
}
void main()
{
    
    insert(4);
    insert(5);
    insert(22);
    insert(33);
    insertBeg(1);

    display();

    reverse(root);
}