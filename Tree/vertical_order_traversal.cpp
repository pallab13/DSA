#include <iostream>
#include <vector>
using namespace std;


class Node{

public:
	int data;
	Node* left, *right;
	Node(int new_data){
		data = new_data;
		left = right = NULL;
	}

};

int mini = 0;
int maxi = 0;

void MiniMaxi(Node* root, int horDis){
	if( root == NULL ){
		return;
	}
	if(mini > horDis){
		mini = horDis;
	}
	if( maxi < horDis){
		maxi = horDis;
	}
	if(root->left){
		MiniMaxi(root->left, horDis-1);
	}
	if(root->right){
		MiniMaxi(root->right, horDis+1);
	}

}
void Minimum(Node* root, int horDis){

	if( root == NULL ){
		return;
	}
	if(mini > horDis){
		mini = horDis;
	}
	if(root->left){
		Minimum(root->left, horDis-1);
	}


}

void Maximum(Node* root, int horDis){
	if( root == NULL ){
		return;
	}
	if(maxi < horDis){
		maxi = horDis;
	}
	if(root->right){
		Maximum(root->right, horDis+1);
	}

}

void printVerticalOrder(Node* root, int current , int middle){

	if(root == NULL){
		return;
	}

	if(current == middle){
		cout << root->data << " ";
	}

	printVerticalOrder(root->left, current, middle - 1);
	printVerticalOrder(root->right, current, middle + 1);
	



}

void verticalOrder(Node* root){
	int horDis = 0;
	// Minimum(root, horDis);
	// Maximum(root, horDis);
	MiniMaxi(root, horDis);
	for(int i = mini; i <= maxi ;i++){
		printVerticalOrder(root, i , 0);
		cout << endl;
	}
	

}

int main(){

	Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->left->left = new Node(5);
    root->right->left->left->left = new Node(6);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
    // root->right->left->right = new Node(8);
    // root->right->right->right = new Node(9);
  
    cout << "Vertical order traversal is \n";
    verticalOrder(root);
  
    return 0;
}