#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head,*newnode,*temp;
void creation();
void show();

int main()
{
  int choice,head=0;
  while(1)
    {
      printf("\n operations performed by Linked List");
      printf("\n1.Creation\n2.Show\n3.End");
      printf("\n\nEnter the choice:");
      scanf("%d",&choice);
      switch (choice)
      {
         case 1:creation();
         break;
         case 2:show();
         break;
         case 3:exit(0);
         default:printf("\nInvalid choice!!");
        }
    }
}

void creation()
{
    newnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data");
  scanf("%d",&newnode->data);
  newnode->next=0;
  
  if (head==0)
    {
      head=temp=newnode;
    }
  else
    {
      temp->next=newnode;
      temp=newnode;
    }
}

void show()
{
    temp=head;
    while(temp != 0)
  {
    printf("%d\t", temp->data);
    temp=temp->next;
  }
}


