#include <iostream>
#include<climits>
using namespace std;

class Node{

public:
	int data;
	Node* left, *right;
	Node(int new_data){
		this->data = new_data;
		this->left = this->right = NULL;
	}

};
int findMaxPath(Node* node, int &maximum){

	if( node == NULL){
		return 0;
	}

	int rightMaxSum = findMaxPath(node->right, maximum);
	int leftMaxSum = findMaxPath(node->left, maximum);

	int maxi1 = max(rightMaxSum, leftMaxSum) + node->data;
	int maxi2 = max(maxi1, node->data);
	int maxi3 = max(maxi2, node->data + leftMaxSum + rightMaxSum);

	maximum = max(maxi3, maximum);

	return maxi2;


}


int findMaxSum(Node* root){

	int maximum = INT_MIN;
	// int maximum;

	findMaxPath(root, maximum);
	return maximum;

}	



int main(){

	Node *root = new Node(10);
    root->left         = new Node(2);
    root->right        = new Node(10);
    root->left->left   = new Node(20);
    root->left->right  = new Node(1);
    root->right->right = new Node(-25);
    root->right->right->left   = new Node(3);
    root->right->right->right  = new Node(4);
    cout << "Max path sum is " << findMaxSum(root);
  	// ans = 42;

	return 0;
}