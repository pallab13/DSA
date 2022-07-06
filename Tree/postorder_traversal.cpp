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

void postOrder(Node* root){
	Node* temp = root;
	if(temp == NULL){
		return;
	}
	postOrder(temp->left);
	postOrder(temp->right);
	cout << temp->data << " ";

}

int main(){

	Node* root = new Node(1);
	root-> left = new Node(2);
	root->right = new Node(3);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

	postOrder(root);

	return 0;
}