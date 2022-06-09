#include <iostream>
using namespace std;


class Node{

public:
	int data;
	Node* next;

};

void printList(Node* tail_pointer){

	Node* current = (tail_pointer)->next;

	do{
		cout << current->data << " => ";
		current = current->next;
	}
	while(current != (tail_pointer)->next);

	if(current == (tail_pointer)->next){
		cout << current->data <<endl;
	}

}


void Insert_Empty(Node** tail_pointer, int new_data){

	Node* new_node = new Node();
	new_node->data = new_data;
	*tail_pointer = new_node;
	new_node->next = new_node;
}

void Insert_Beginning(Node** tail_pointer, int new_data){

	if(*tail_pointer == NULL){
		return Insert_Empty(tail_pointer, new_data);
	}

	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*tail_pointer)->next;
	(*tail_pointer)->next = new_node;


}

void Insert_End(Node** tail_pointer, int new_data){


	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*tail_pointer)->next;
	(*tail_pointer)->next  = new_node;
	(*tail_pointer) = new_node;

}

void Insert_After(Node** tail_pointer, int new_data){


}




int main(){

	Node* tail = NULL;

	Insert_Empty(&tail, 5);
	printList(tail);
	Insert_Beginning(&tail,4);
	printList(tail);
	Insert_Beginning(&tail,3);
	printList(tail);

	Insert_Beginning(&tail,2);

	printList(tail);

	// Insert_End(&tail,8);

	// printList(&tail);


	return 0;
}