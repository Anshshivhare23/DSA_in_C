#include <stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};
struct node *head,*newnode,*temp,*prev,*nn;

void create();
void delete();
void show();
int main()
{
  int c,head=0;
  while(1)
  {
    printf("\nChoose operation 1.Create 2.Delete 3.Show 4.Exit\n");
    scanf("%d",&c);
   
    switch(c)
    {
      case 1:
        create();
        break;
      case 2:
        delete();
        break;
      case 3:
        show();
        break;
      case 4:exit(0);
      default:printf("\nInvalid choice!!\n");
    }
  }
}

void create()
{
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter Data :");
  scanf("%d",&newnode->data);
  newnode->next=0;
  if(head==0)
  { head=temp=newnode;}
  else{
    temp->next=newnode;
    temp=newnode;
  }
}
 
void delete()
{
  int s;
  printf("\nDelete from :\n1.First 2.Certain position");
  scanf("%d",&s);
  switch(s){
    case 1:{
        temp=head;
      head=head->next;
      free(temp);
    }break;
    case 2:{
      int p,i;
      printf("\nEnter position :");
      scanf("%d",&p);
      nn=head;
      for(i=1;i<=p;i++)
      {
        prev=temp;
        temp=nn;
        nn=nn->next;
      }
      prev->next=nn;
      free(temp);
    }break;
  }
}

void show()
{
 temp=head;
 while(temp!=0){
   printf("%d\t",temp->data);
   temp=temp->next;
 }
}

