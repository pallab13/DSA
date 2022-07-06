#include <iostream>
// #include <bits/stdc++.h>
using namespace std;



class StackNode{
	public: 
		int data;
		StackNode* next;
};



bool Isempty( StackNode* headpointer){
	if( headpointer == NULL){
		return true;
	}
	else{
		return false;
	}
}


void push(StackNode** headpointer, int data){
	StackNode* temp = (*headpointer);
	StackNode* new_val = new StackNode();
	new_val->data = data;
	new_val->next = (temp);
	(*headpointer) = new_val;

}

int pop(StackNode** headpointer){
		
	StackNode* temp = (*headpointer);
	(*headpointer) = temp->next;
	return temp->data;
}

int top( StackNode* headpointer){
	return headpointer->data;
}



int main(){

	StackNode* stack = NULL;
	cout << Isempty(stack) << endl;;
	push(&stack, 40);
	cout << top(stack) << endl;
	push(&stack, 30);
	push(&stack, 20);
	push(&stack, 10);
	cout << pop(&stack) << " is removed" << endl;;
	cout << pop(&stack) << " is removed" << endl;
	cout << top(stack) << endl;
	Isempty(stack);
	
	





	return 0;

}