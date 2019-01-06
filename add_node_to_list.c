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

struct node* add_at_start(struct node **head, int data)
{
        struct node *temp_ptr = *head;

	struct node *new_head;
	new_head = create_node();
	new_head->data = data;
	*head = new_head;
	(*head)->next = temp_ptr;
	return NULL; 
}

struct node* add_in_middle(struct node **head, int index, int data)
{
        struct node *temp_ptr = *head;
	
	int counter = 0;
        struct node *new_node;
        new_node = create_node();
        new_node->data = data;

	while(counter < (index - 1) && NULL != temp_ptr->next)
	{
		temp_ptr = temp_ptr->next;
		counter++;
	}
	
	new_node->next =  temp_ptr->next;
        temp_ptr->next = new_node;
        return NULL;
}

struct node* add_at_end(struct node **head, int data)
{
        struct node *temp_ptr = *head;

        struct node *new_end;
        new_end = create_node();
	new_end->data = data;
	
	while(NULL != temp_ptr->next)
	{
		temp_ptr = temp_ptr->next;
	}
        
	temp_ptr->next = new_end;
        return NULL;
}

void print_list(struct node *print_temp)
{
	printf("\n\n -:Printing the linked list:-\n\n");

	while(print_temp != NULL)
	{
		printf("\t %d -->", print_temp->data);
		print_temp = print_temp->next;
	}
	printf("NULL\n\n");
}

int main()
{
	struct node *head = NULL;
	int choice = 0;
	printf("\n\n Program to add node at perticular position in the linked list:: \n\n");

	insert_node_to_list(&head, 0, 10);
	insert_node_to_list(&head, 0, 20);
	insert_node_to_list(&head, 0, 30);
	insert_node_to_list(&head, 0, 40);
	insert_node_to_list(&head, 0, 50);
	insert_node_to_list(&head, 0, 60);
	insert_node_to_list(&head, 0, 70);
	insert_node_to_list(&head, 0, 80);
	insert_node_to_list(&head, 0, 90);
	insert_node_to_list(&head, 0, 91);
      
	printf("\n\n Cureently the list looks like:-\n");
	print_list(head);

	printf("\n\nEnter your choice for adding Node in list: \n1. At start. \n2. In the middle.\n3. At the End. \n4. TO print list.\n\n");         
	scanf("%d", &choice);
	
	switch(choice)
	{
	case 1:	add_at_start(&head, 5);
		add_at_start(&head, 2);
		print_list(head);
		break;
	case 2: add_in_middle(&head, 2, 23); //adding at index 2, index starting from 0
		print_list(head);
		add_in_middle(&head, 2, 22); //adding at index 2, index starting from 0
		print_list(head);
		break; 
	case 3: add_at_end(&head, 99);
		add_at_end(&head, 100);
		print_list(head);
		break; 
	case 4: print_list(head);
		break;
	default: printf("\n\nExiting! \n");
		break;
	}	
	return 0;
}
