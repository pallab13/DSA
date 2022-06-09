#include <iostream>
using namespace std;

class Node{
	public :
		int data;
		Node* next;
};

void push(Node** head_pointer, int data){

	Node* temp = new Node();
	temp->data = data;
	temp->next = (*head_pointer);
	*head_pointer = temp;

}


void sorted_insert(Node** head_pointer, int key){

	Node* temp = new Node();
	temp-> data = key;
	Node* current = *head_pointer;
	Node* prev =  NULL;

	if(current == NULL){
		temp->next = current;
		*head_pointer = temp;
		return;
	}

	else if(current != NULL && key<= current->data){
		temp->next = current;
		*head_pointer = temp;
		return;
	}

	else{
		while(current->next != NULL && key > current->data ){
			// temp->next = current->next;
			// current->next = temp;
			prev = current;
			current = current->next;
		}
		if (current->next == NULL){

			current->next = temp;
			temp->next = NULL;

		}
		else{
			temp->next = current;
			prev->next = temp;
		}
	}

	current->next = temp;
	temp->next = NULL;

	

}

int main(){

	Node* head = NULL;

	push(&head, 27);
	push(&head, 16);
	push(&head, 9);
	push(&head, 4);
	push(&head, 3);
	
	int key = 119;
	sorted_insert(&head, key);

	Node* current = head;

	while(current){
		cout<<current->data<< " ";
		current = current->next;
	}



	return 0;
}