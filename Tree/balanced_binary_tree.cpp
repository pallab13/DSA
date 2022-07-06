#include <iostream>
using namespace std;

class Node{

public:
	int data;
	Node* left;
	Node* right;
	Node( int data){
		this->data = data;
		this->left = NULL;
		this->left = NULL;
	}

};

int heightTree(Node* temp_root);

bool isBalanced(Node* root){

	Node* temp = root;

	if( temp == NULL){
		return true;
	}

	int leftHeight = heightTree(temp->left);
	int rightHeight = heightTree(temp->right);

	if( abs(leftHeight - rightHeight) <= 1 && isBalanced(temp->left) && isBalanced(temp->right)  ){
		return true;
	}
	
	return false;


}

int heightTree(Node* temp_root){

	if ( temp_root == NULL){
		return 0;
	}

	int leftHeight = heightTree(temp_root->left);
	int rightHeight = heightTree(temp_root->right);

	if( leftHeight > rightHeight){
		return leftHeight + 1 ;
	}
	else{
		return rightHeight + 1;
	}
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(8);
 
    if (isBalanced(root))
        cout << "Tree is balanced";
    else
        cout << "Tree is not balanced";
    return 0;
}