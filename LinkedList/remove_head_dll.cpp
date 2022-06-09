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
    int index = 0;
	while(current != NULL){
		cout << current->data;
        index++;
		current = current->next;
	}

    if(index == 0 ){
        cout <<  "Its an empty Linked List" << endl;
    }


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


void remove_head(Node** head_pointer){

    if((*head_pointer)->next == NULL){

        *head_pointer = NULL;
        return;
    }   
    Node* prev_curr = *head_pointer;
    Node* current = (*head_pointer)->next;


    current->prev = NULL;
    *head_pointer = current;
    delete prev_curr;


}

int main(){

	Node* head = NULL; 
	push(&head, 5);
	// push(&head, 4);
	// push(&head, 3);
	// push(&head, 2);
	// push(&head, 1);

	printList(head);

    cout << endl;

    remove_head(&head);

    printList(head);

}