#include <stdio.h>
#include <stdlib.h>
struct node {
           int info;
           struct node* link;
           int data;
	struct node *next;
            };
struct node* start = NULL;
struct node *head,*newnode,*temp;


// Function to create list with nodes initially 
void createList()
{
if (start == NULL) {
int n;
printf("\nEnter the number of nodes: ");
scanf("%d", &n);
if (n != 0)
{
int data;
struct node* newnode;
struct node* temp;
newnode = (struct node*)malloc(sizeof(struct node));
start = newnode;
temp = start;
printf("\nEnter number to be inserted : ");
scanf("%d", &data);
start->info = data;

for (int i = 2; i <= n; i++)
{
newnode = (struct node*)malloc(sizeof(struct node));
temp->link = newnode;
printf("\nEnter number to be inserted : ");
scanf("%d", &data);
newnode->info = data;
temp = temp->link;
}
}
printf("\nThe list is created\n");
}
else
printf("\nThe list is already created\n");
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
// Function to show the linked list 
void show()
{
    temp=head;
    while(temp != 0)
  {
    printf("%d\t", temp->data);
    temp=temp->next;
  }
}



// Function to insert at the front of linked list
void insertAtFront()
{
int data;
struct node* temp;
temp = (struct node*)malloc(sizeof(struct node));
printf("\nEnter number to be inserted : ");
scanf("%d", &data);
temp->info = data;
temp->link = start;
start = temp;
}

// Function to insert at the end of linked list
void insertAtEnd()
{
int data;
struct node *temp, *head;
temp = (struct node*)malloc(sizeof(struct node));
printf("\nEnter number to be inserted : ");
scanf("%d", &data);
temp->link = 0;
temp->info = data;
head = start;
while (head->link != NULL)
{
head = head->link;
}
head->link = temp;
}

// Function to insert at any specified
void insertAtPosition()
{
struct node *temp, *newnode;
int pos, data, i = 1;
newnode = (struct node*)malloc(sizeof(struct node));
printf("\nEnter position and data :");
scanf("%d %d", &pos, &data);
temp = start;
newnode->info = data;
newnode->link = 0;
while (i < pos - 1)
{
temp = temp->link;
i++;
}
newnode->link = temp->link;
temp->link = newnode;
}

//main code
int main()
{
int choice;
while (1) {

printf("\n\t1.To see list\n");
printf("\t2.For insertion at starting\n");
printf("\t3.For insertion at end\n");
printf("\t4.For insertion at any position\n");
printf("\t5.To exit\n");
printf("\nEnter Choice :\n");
scanf("%d", &choice);

switch (choice) {
case 1:creation();
break;
case 2:show();
break;
case 3:insertAtFront();
break;
case 4:insertAtEnd();
break;
case 5:insertAtPosition();
break;
case 6:exit(0);
break;
default:
printf("Incorrect Choice!!\n");
}
}
return 0;
}




