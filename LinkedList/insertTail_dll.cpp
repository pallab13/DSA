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

void InsertAtEnd(Node** head_pointer, int new_data){

    Node* new_node = new Node();
    Node* current = *head_pointer;
    new_node->data = new_data;

    if(*head_pointer == NULL){
        new_node->next = NULL;
        new_node->prev = NULL;
        *head_pointer = new_node;
        return;
    }

    while(current->next != NULL){
        current = current->next;
    }

    
    new_node->next = NULL;
    current->next = new_node;
    new_node->prev = current;
    
}

int main(){

	Node* head = NULL; 
	InsertAtEnd(&head, 5);
	InsertAtEnd(&head, 4);
	InsertAtEnd(&head, 3);
	InsertAtEnd(&head, 2);
	InsertAtEnd(&head, 1);
	

	printList(head);

}