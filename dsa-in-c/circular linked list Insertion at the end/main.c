
#include <stdio.h>
#include <stdlib.h>


struct node {
	int info;
	struct node* next;
};

struct node* last = NULL;


void addatlast(int data)
{
	
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));

	if (last == NULL) {
		temp->info = data;
		temp->next = temp;
		last = temp;
	}


	else {
		temp->info = data;
		temp->next = last->next;
		last->next = temp;
		last = temp;
	}
}


void viewList()
{
	
	if (last == NULL)
		printf("\nList is empty\n");

	
	else {
		struct node* temp;
		temp = last->next;
		do {
			printf("\nData = %d", temp->info);
			temp = temp->next;
		} while (temp != last->next);
	}
}


int main()
{
	
	addatlast(10);
	addatlast(20);
	addatlast(30);

	
	viewList();

	return 0;
}
