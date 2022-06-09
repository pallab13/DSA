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



void reverse_linked_list(Node** head_pointer){

	Node* prev_node = NULL;
	Node* next_node = NULL;
	Node* current = *head_pointer;


	while(current){

		next_node = current->next;
		current->next = prev_node;
		prev_node = current;
		current = next_node;
	}
	*head_pointer = prev_node;
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
	cout <<endl;
	reverse_linked_list(&head);

	Node* new_current	 = head;

	while(new_current	){
		cout << new_current	->data << " ";
		new_current	 = new_current	->next;
	}

	return 0;
}
