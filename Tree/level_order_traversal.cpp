#include<iostream>
#include<stack>
#include <queue>
using namespace std;

class Node{

public:
	int data;
	Node* left;
	Node* right;

	Node(int data ){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void levelOrder( Node* root){

	Node* temp = root;

	if(temp == NULL){
		return;
	}

	queue <Node*> q;

	q.push(temp);

	while(!q.empty()){
		Node* var = q.front();
		cout << var->data << " ";
		q.pop();
		if( var->left ){
			q.push(var->left);
		}
		if( var->right ){
			q.push(var->right);
		}



	}

}

int main(){

	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

	levelOrder(root);

	return 0;
}