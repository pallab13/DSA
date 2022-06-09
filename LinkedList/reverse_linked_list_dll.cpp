#include <iostream>
using namespace std;

class Node{

	public :
		int data;
		Node* next;
		Node* prev;
		

};

void printList(Node *head_pointer){

	Node* current = head_pointer;

	while(current != NULL){
		cout << current->data;
		current = current->next;
	}
	cout << endl;

}

void push(Node** head_pointer, int new_data){

	Node* new_node = new Node();
	new_node->data = new_data;

	if( (*head_pointer) == NULL){
		new_node->next = *head_pointer;
		new_node->prev = NULL;
		*head_pointer = new_node;
		
	}
	else{
		new_node->next = *head_pointer;
		new_node->prev = NULL;
		(*head_pointer)->prev = new_node;
		*head_pointer = new_node;
	}

}

void reverse(Node** head_pointer){

	Node* current = *head_pointer;
	Node* temp = NULL;
	while(current != NULL){
		temp = current->prev;
		current->prev = current->next;
		current->next = temp;
		current = current->prev;
		// temp = current->next;
		// current->next = current->prev;
		// current->prev = temp;
		// current = current->prev;
	}

	if( temp !=NULL){
		*head_pointer = temp->prev;
	}
}

int main(){

	Node* head = NULL; 
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	
	printList(head);

	reverse(&head);

	printList(head);

}