#include <iostream>
using namespace std;


class Node {

	public:
		
	int data;
	Node* next;

};

int main(){

	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 3;
	second->data = 7;
	third->data = 5;

	head->next = second;
	second->next = third;

	Node* n = head;
	while(n != NULL){
		cout << n->data << " ";
		n = n->next;
	}

	return 0;
}
