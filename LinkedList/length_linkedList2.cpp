#include <iostream>
using namespace std;

class Node{
	public :
		int data;
		Node* link;
};

void push(Node** head_pointer, int data){

	Node* temp = new Node();
	temp->data = data;
	temp->link = (*head_pointer);
	(*head_pointer) = temp;

}

int count( Node** head_pointer){
	Node* current = (*head_pointer);
	

	if (current == NULL){
		return 0;
	}
	else{
		return 1 + count(&(current->link));
	}

}


int main(){

	Node* head = NULL;
	push(&head, 3);
	push(&head, 4);
	push(&head, 63);
	push(&head, 38);
	// push(&head, 322);
	int count_node = count(&head);
	cout<< count_node;

	
	return 0;
}