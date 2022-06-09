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



Node* reverse_linked_list_rec(Node* head){

	Node* next_head;
	if(head == NULL or head->next == NULL){
		return head;
	}

	Node* new_head = reverse_linked_list_rec(head->next);
	next_head = head->next;
	next_head->next = head;
	head->next = NULL;
	return new_head;
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
	Node* head_new = reverse_linked_list_rec(head);

	Node* new_current = head_new;

	while(new_current	){
		cout << new_current	->data << " ";
		new_current	 = new_current	->next;
	}

	return 0;
}
