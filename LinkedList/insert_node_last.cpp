#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* link;
};

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

void value(Node** head_pointer, int data2){

	(*head_pointer)->data = data2;
}

int main(){

	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	Node* fourth = new Node();

	value(&head,3);
	value(&second,4);
	value(&third,8);
	value(&fourth,6);
	head->link = second;
	second->link = third;
	third->link = fourth;
	fourth->link = NULL;


	insert_end(&head, 89);
	Node* current = head;
	while(current!=NULL){
		cout << current->data << "  ";
		current = current->link;
	}


	return 0;
}	