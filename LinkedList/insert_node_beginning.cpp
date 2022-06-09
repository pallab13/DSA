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

	Node* temp = new Node();

	temp-> data = 100;
	temp->link = head;
	head = temp;
	int index = 0;
	Node* current = head;
	while(current->link != NULL){
		cout<< current->data<< "  " ; 
		index++;
		current = current->link;

	}
	
	// cout << index<<endl;






	return 0;
}