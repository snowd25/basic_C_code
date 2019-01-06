 #include<stdio.h>
#include<stdlib.h>
typedef struct node {
	int data;
	struct node* next;
} Node;

Node* create_node(int data){
	
	Node * temp = (Node *) malloc(sizeof(struct node *));
	temp->data = data;
	temp->next = NULL;

	return temp;
}

struct void insert_node_to_list(struct node **head, int position, int data){
	struct node *newNode;

	newNode = create_node(data);

	//printf("\t %p -->", &temp->data);
	if(*head == NULL){
	    *head = temp;
	}
	else {
	    Node *current = *head;
	    while(current->next != NULL){
                current = current->next;
	    }
		
	    current->next = newNode;
	}
}

Node * find_element_in_linked_list(struct node *head, int search_key){
        struct node *current = head;
        while(NULL != current){
		if(current->data == search_key){
			return current;
		}
		currrent = currrent->next;
        }
        return NULL;
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
