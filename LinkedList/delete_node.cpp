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
	(*head_pointer) = temp;
}

void delete_node(Node** head_pointer, int key){

	Node* current = *head_pointer;
	Node* prev = NULL;
	if (current != NULL && current->data == key){
		*head_pointer = current->next;
		delete current;
		return;
	}

	else{
		while(current != NULL && current->data != key){

			prev = current;
			current = current->next;	

		}


		if(current == NULL){
			return;
		}

		prev->next = current->next;
		delete current;
	}

}	


int main(){

	Node* head = NULL;
	push(&head, 3);
	push(&head, 6);
	push(&head, 87);
	push(&head, 13);

	int key = 56;

	delete_node(&head, key);

	Node* current = head;

	while(current!=NULL){
		cout << current->data<<" ";
		current = current->next;
	}
}