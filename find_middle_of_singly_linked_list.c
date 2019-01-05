#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};


struct node* create_node()
{
	struct node* temp;
	temp = malloc(sizeof(struct node *));
	temp->next = NULL;

	return temp;
}

struct node* insert_node_to_list(struct node **head, int position, int data)
{
	struct node *temp, *p;

	temp = create_node();
	temp->data = data;

	//printf("\t %p -->", &temp->data);
	if(*head == NULL)
	{
		temp->data = data;
		*head = temp;
	}
	else 
	{
		p = *head;
		while(p->next != NULL)
		{
			p = p->next;
		}
		
	p->next = temp;
	}
	 //printf("\t %p -->", &(*head)->data);

	return NULL;
}

struct node* find_mid_of_linked_list(struct node *head)
{
        struct node *fast_ptr = head;
	struct node *slow_ptr = head;
        printf("hello:%d", head->data);
        while(NULL != fast_ptr && NULL != fast_ptr->next)
        {
		fast_ptr = fast_ptr->next->next;
		if(fast_ptr)
			slow_ptr = slow_ptr->next;	
        }
        return slow_ptr;
}

int main()
{
	struct node *head = NULL;
	printf("\n\n Program to insert node into the linked list:: \n\n");

	//head = 
	insert_node_to_list(&head, 0, 10);
	insert_node_to_list(&head, 0, 20);
	insert_node_to_list(&head, 0, 30);
	insert_node_to_list(&head, 0, 40);
	insert_node_to_list(&head, 0, 50);
	insert_node_to_list(&head, 0, 60);
	insert_node_to_list(&head, 0, 70);
	insert_node_to_list(&head, 0, 80);
	insert_node_to_list(&head, 0, 90);
	//insert_node_to_list(&head, 0, 100);
	
	printf("\n\n -:Printing the linked list:-\n\n");
	struct node *temp;
	temp  = head;

	while(temp != NULL)
	{
		printf("\t %d -->", temp->data);
		temp = temp->next;
	}
	 printf("NULL\n\n");

	struct node *mid = find_mid_of_linked_list(head);
        printf("\n\nMid of the list is: %d\n\n", mid->data);
	return 0;
}
