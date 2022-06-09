#include <iostream>
using namespace std;

class Node{

	public:
		int data;
		Node* link;

};


void push(Node** head_pointer, int data){
	Node* temp = new Node();
	temp-> data = data;
	temp->link = *head_pointer;
	*head_pointer = temp;


}


void insert_end(Node** head_pointer, int data){

	Node* last = new Node();
	last->data = data;
	Node* current = (*head_pointer);
	while(current->link != NULL){
		current = current->link;
	}

	current->link = last;
	last->link = NULL;


}

void insert_end2(Node* head_pointer, int data){

	Node* last = new Node();
	last->data = data;
	Node* current = (head_pointer);
	while(current->link != NULL){
		current = current->link;
	}

	current->link = last;
	last->link = NULL;

}

void insert_after(Node* prev_node, int data){

	Node* middle = new Node();

	middle->data = data;
	middle->link = prev_node->link;
	prev_node->link = middle;



}


int main(){

	Node* head = NULL;
	push(&head, 4);
	push(&head, 6);
	insert_end(&head, 44);
	push(&head, 64);
	insert_end2(head,333);
	insert_after(head->link,67);

	Node* current = head;

	while(current != NULL){
		cout<< current->data<< "  " ; 
		current = current->link;

	}



	return 0;
}