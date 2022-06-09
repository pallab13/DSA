#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* link;
};


int main(){

	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 5;
	head->link = second;
	second->data = 6;
	second->link = third;
	third->data = 7;
	third->link = NULL;

	Node* current = head;
	while(current != NULL){
		cout<< current->data<< "  " ; 
		current = current->link;

	}

	cout << endl;
	Node* middle = new Node();
	middle->data = 13;
	middle->link = third;
	second->link = middle;
	
	int index = 0;
	current = head;
	while(current != NULL){
		cout<< current->data<< "  " ; 
		index++;
		current = current->link;

	}



	return 0;
}