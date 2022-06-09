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


void deleteNodes(Node** head_pointer, int key){

	Node* current = *head_pointer;
	Node* prev = NULL;
	Node* temp;
	while(current != NULL && current->data == key){
		*head_pointer = current->next;
		current = *head_pointer;
	}

	while(current != NULL ){

		if(current->data == key){
			prev->next = current->next;
			current = prev->next;
		}
		else{
			prev = current;
			current = current->next;
		}
			

	}


	if(current == NULL){
		return;
	}
	

}	


int main(){

	Node* head = NULL;
	push(&head, 8);
	push(&head, 3);
	push(&head, 3);
	push(&head, 99);
	push(&head, 3);
	push(&head, 3);
	push(&head, 3);
	
	push(&head, 97);
	push(&head, 78);
	Node* current = head;

	while(current){
		cout<< current->data << "  ";
		current = current->next;
	}
	
	deleteNodes(&head, 90);

	current = head;


	cout << endl;

	
	while(current){
		cout<< current->data << "  ";
		current = current->next;
	}
	





	return 0;
}