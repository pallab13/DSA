#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void push(Node** head_pointer, int data);

void insert_end(Node** head_pointer, int data){

	Node* last = new Node();
	last->data = data;
	Node* current = (*head_pointer);
	while(current->next != NULL){
		current = current->next;
	}

	current->next = last;
	last->next = NULL;


}

Node* intersection(Node* a, Node* b){

	Node* head = NULL;
	Node* current = NULL;


	while(a != NULL && b!= NULL){
		if ( a-> data == b->data ){

			if(head == NULL){
				push(&head, a->data);
				current = head;
			}

			else{
				// push(&current->next, a->data);
				insert_end(&head, a->data);
				current = current->next;
			}

			a = a->next;
			b = b->next;	

		}

		else if(a-> data > b->data ){
			b = b->next;
		}

		else{
			a = a->next;
		}

	}

	return head;

}


void push(Node** head_pointer, int data){

	Node* temp = new Node();
	temp->data = data;
	temp->next = *head_pointer;
	*head_pointer = temp;
}


int main(){

	Node* head_a = NULL;
	Node* head_b = NULL;

	push(&head_a, 6);
	push(&head_a, 5);
	push(&head_a, 4);
	push(&head_a, 3);
	push(&head_a, 2);
	push(&head_a, 1);

	push(&head_b, 8);
	push(&head_b, 4);
	push(&head_b, 2);
	push(&head_b, 0);
	
	
	

	// Node* current = head_b;

	// while(current != NULL){
	// 	cout<< current->data<< "  " ; 
	// 	current = current->next;

	// }

	Node* intersect = intersection(head_a, head_b);

	Node* current = intersect;

	while(current != NULL){
		cout<< current->data<< "  " ; 
		current = current->next;

	}
	



	return 0;
}