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

int Diameter ( Node* root){

	if( root == NULL){
		return 0;
	}

	int leftHeight = heightTree( root->left);
	int rightHeight = heightTree(root-> right);

	int maxi = leftHeight + rightHeight +1 ;

	int leftDiameter = Diameter(root->left);
	int rightDiameter = Diameter(root->right);

	int diaMaxi = max(leftDiameter, rightDiameter);

	return max(maxi, diaMaxi);

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
    // root->left->left->left = new Node(8);
 
    cout << Diameter(root) << endl;

    return 0;
}