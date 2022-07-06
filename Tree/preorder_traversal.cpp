#include<iostream>
#include <stack>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;
	Node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void preOrder(Node* root){
	Node* temp = root;
	if(temp == NULL){
		return;
	}
	cout << temp->data << " ";
	preOrder(temp->left);
	
	preOrder(temp->right);
}

int main(){

	Node* root = new Node(1);
	root-> left = new Node(2);
	root->right = new Node(3);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

	preOrder(root);

	return 0;
}