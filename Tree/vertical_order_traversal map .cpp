#include <iostream>
#include <queue>
using namespace std;

class Node{

public:
	int data ;
	Node* left, right;

	Node(int new_data){
		data = new_data;
		left = right = NULL;
	}

};

printVerticalOrder( Node* root){

	
	
}



int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->right = new Node(8);
    root->right->right->right = new Node(9);
    cout << "Vertical order traversal is \n";
    printVerticalOrder(root);
    return 0;
}

/* 
Vertical order traversal is n4 
2 
1 5 6 
3 8 
7 
9 

*/