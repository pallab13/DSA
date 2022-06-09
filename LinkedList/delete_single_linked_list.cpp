#include <iostream>
using namespace std;

class Node{

public:
	int data;
	Node* next;

};

void push(Node** head_pointer, int data){

	Node* temp = new Node();
	temp->data = data;
	temp->next = *head_pointer;
	*head_pointer = temp;

}


void delete_linked_list(Node** head_pointer){

	Node* current = *head_pointer;
	Node* next;

	while(current){
		next = current->next;
		delete current;
	}
	*head_pointer = NULL;


}

int main(){

	Node* head = NULL; 
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	
	Node* current = head;

	while(current){
		cout << current->data << " ";
		current = current->next;
	}

	delete_linked_list(&head);
	current = head;

	while(current){
		cout << current->data << " ";
		current = current->next;
	}


	return 0;
}