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
	temp->next = *head_pointer;
	*head_pointer = temp;

}


void printList(Node* head){

	Node* current = head;

	while(current != NULL){
		cout << current->data;
		current = current->next;
	}
}

void remove_loop(Node* slow_pointer, Node* head_pointer){

	Node* ptr1 = slow_pointer;
	Node* ptr2 = slow_pointer;

	unsigned int k = 1;


	while(ptr2->next != ptr1){
		k++;
		ptr2 = ptr2->next;
	}

	ptr1 = head_pointer;
	ptr2 = head_pointer;

	for(int i = 0; i < k;i++){
		ptr2 = ptr2->next;
	}

	while(ptr2 != ptr1){
		ptr2 = ptr2->next;
		ptr1 = ptr1->next;
	}

	while(ptr1->next != ptr2){
		ptr1 = ptr1->next;
	}
	ptr1->next = NULL;

}



int detect_loop(Node* head_pointer){

	Node* slow_pointer = head_pointer;
	Node* fast_pointer = head_pointer;

	while( fast_pointer->next != NULL && fast_pointer->next->next != NULL){

		slow_pointer = slow_pointer->next;
		fast_pointer = fast_pointer->next->next;

		if(slow_pointer == fast_pointer){
			remove_loop(slow_pointer, head_pointer);
			return 1;
		}

	}
	return 0;

}





int main(){

	Node* head = NULL;
    push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);



	head->next->next->next->next->next = head->next->next;

	cout << "Linked List after removing loop \n";

	int val = detect_loop(head);

	printList(head);




	return 0;
}