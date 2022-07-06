#include <iostream>
using namespace std;


class Node{

public:
	int data;
	Node* left;
	Node* right;

	Node(int data){
		this->data = data;
		this->left = this->right = NULL;
	}
};

bool identicalTrees( Node* root1, Node* root2){

	if( root1 == NULL && root2 == NULL){
		return 1;
	}
	else if( root1 == NULL || root2 == NULL){
		return 0;
	}
	else if( root1->data == root2->data && identicalTrees(root1->left, root2->left) && 
		identicalTrees(root1->right, root2->right)){

		return 1;
	}

	
	else{
		return 0;
	}
}

int main(){


    Node *root1 = new Node(1);
    Node *root2 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
 
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);
    root1->left->right->left = new Node(5);
 
    if(identicalTrees(root1, root2))
        cout << "Both tree are identical.";
    else
        cout << "Trees are not identical.";
 

	return 0;
}