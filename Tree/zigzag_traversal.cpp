#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

class Node{

public:
	int data;
	Node* left;
	Node* right;

	Node(int data){
		this->data = data;
		left = right = NULL;
	}
};

void zizagtraversal(Node* root){

	bool flag = 0;

	queue <Node*> q1;
	// stack <Node*> st2;
	vector <int> ans;
	q1.push(root);

	

	while(!q1.empty()){
		int size = q1.size();
		vector <int> level;
		for(int i = 0; i <size; i++){
			Node* temp = q1.front();
			q1.pop();
			level.push_back(temp->data);
			

			iwf( temp->left){
			q1.push(temp->left);
			}
			if( temp->right){
				q1.push(temp->right);
			}
		}
	

		if( flag == 1){
			reverse(level.begin(), level.end());
		}
		flag = !flag;

		for(int j = 0; j < level.size(); j++){
			ans.push_back(level[j]);
		}

	}

	for( auto it = ans.begin(); it != ans.end(); it++){
		cout << (*it) << " ";
	}


}
int main(){

	Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(7);
    root->left->right = new Node(6);
    root->right->left = new Node(5);
    root->right->right = new Node(4);
    cout << "ZigZag Order traversal of binary tree is \n";
 
    zizagtraversal(root);

	return 0;
}