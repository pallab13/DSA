#include <iostream>
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


int treeDepth( Node* root){

	Node* temp = root;

	if( temp == NULL){
		return 0;
	}

	int leftDepth = treeDepth(temp->left);
	int rightDepth = treeDepth(temp->right);

	if( leftDepth > rightDepth){
		return leftDepth + 1;
	}

	else{
		return rightDepth + 1;
	}



}

int main(){

	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(4);

	int depth = treeDepth(root);

	cout << depth << endl;

	return 0;
}