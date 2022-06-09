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
}


void Push(Node** head_pointer, int new_data){

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

void InsertAfterNode(Node* prev_node, int new_data){

    Node* new_node = new Node();
    new_node->data = new_data;

    new_node->next = prev_node->next;
    new_node->prev = prev_node;

    if(prev_node->next != NULL){
        prev_node->next->prev = new_node;
    }

    prev_node->next = new_node;
    
    
}

int main(){

	Node* head = NULL; 
	Push(&head, 5);
	Push(&head, 4);
	Push(&head, 3);
	Push(&head, 1);
	InsertAfterNode(head, 2);
	

	printList(head);

}