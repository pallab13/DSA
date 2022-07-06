#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node{

public:
	int data;
	Node* left, *right;

	Node( int new_data){
		data = new_data;
		left = right = NULL;
	}
};

void printLeftSide(Node* node){

	vector <int> vect;

	while(node->left){
		vect.push_back(node->data);
		node = node->left;
	}

	for ( auto it = vect.begin(); it != vect.end(); it++){
		cout << (*it) << " ";
	}

}

void printRightSide(Node* node){


	vector <int> vect;

	while(node->right){
		vect.push_back(node->data);
		node = node->right;
	}

	reverse(vect.begin(), vect.end());
	
	for ( auto it = vect.begin(); it != vect.end() - 1; it++){
		cout << (*it) << " ";
	}

}

void printLeaf(Node* node){

	if(node == NULL){
		return;
	}
	

	if(!(node->left) && !(node->right) ){
		cout << node->data << " ";
	}
	
	printLeaf(node->left);
	printLeaf(node->right);
}


void printBoundary( Node* root){

	printLeftSide(root);
	printLeaf(root);
	printRightSide(root);
}

int main(){

	Node* root = new Node(20);
    root->left = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
    root->right = new Node(22);
    root->right->right = new Node(25);
 
    printBoundary(root);
 
    return 0;

}