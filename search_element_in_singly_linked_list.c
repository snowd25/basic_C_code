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
 int find_element_in_linked_list(struct node *head, int search_key)
{
        struct node *temp_ptr = head;

	int count = 0;
        //printf("hello:%d", head->data);

        while(NULL != temp_ptr)
        {
		if(temp_ptr->data == search_key)
		{
			return count;
		}
		count += 1;
		temp_ptr = temp_ptr->next;
        }
        return -1;
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
	insert_node_to_list(&head, 0, 100);
	
	printf("\n\n -:Printing the linked list:-\n\n");
	struct node *temp;
	temp  = head;

	while(temp != NULL)
	{
		printf("\t %d -->", temp->data);
		temp = temp->next;
	}
	 printf("NULL\n\n");

	int index = find_element_in_linked_list(head, 50);
        printf("\n\nThe element found in the list at index: %d\n\n", index);
	return 0;
}
