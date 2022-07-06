#include<iostream>
#include<stack>
#include <vector>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;
	Node( int data){
		this->data = data;
		this->left = this->right = NULL;
	}
};

void allTraversal( Node* root){

	Node* temp = root;

	stack < pair<Node*, int> > st;

	vector <int> preOrder;
	vector <int> postOrder;
	vector <int> inOrder;

	st.push(make_pair(root, 1)); 

	while(!st.empty()){

		pair<Node*, int> p = st.top();

		if(p.second == 1){
			preOrder.push_back(p.first->data);
			(st.top() ).second += 1; 
			if(p.first->left){
				st.push(make_pair(p.first->left,1));
			}
		}

		else if(p.second == 2){
			inOrder.push_back(p.first->data);
			(st.top() ).second += 1; 
			if(p.first->right){
				st.push(make_pair(p.first->right,1));
			}
		}

		else if(p.second == 3){
			postOrder.push_back(p.first->data);
			st.pop();
			
		}

	}

	for(auto element : preOrder){
		cout << element << " ";
	}
	cout << endl;

	for(auto element : inOrder){
		cout << element << " ";
	}

	cout << endl;

	for(auto element : postOrder){
		cout << element << " ";
	}


}

int main(){

	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);

	allTraversal(root);

	return 0;
}

