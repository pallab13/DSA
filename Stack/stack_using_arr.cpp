#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
#define Max 100 


// class Stack{

// 	int count;

// 	public :

// 		int a[Max];
// 		Stack(){
// 			count = -1;
// 		};

// 		void push(int num);
// 		int pop();
// 		int top();
// 		bool Isempty();	

// };

class Stack{

	int count;
	int* a;
	int capacity;

	public :

		Stack(int capacity){
			this->capacity = capacity;
			count = -1;
			a = new int[capacity];
		}

		void push(int num);
		int pop();
		int top();
		bool Isempty();	

};



bool Stack::Isempty(){
	if (count < 0){
		// cout << " It is empty" << endl;
		return true;
	}
	else{
		// cout << " It is not empty" << endl;
		return false;
	}

}


void Stack::push(int num){
	if( Max-1 <= count){
		cout << "Its already Full" << endl;
		return;
	}
	else {
		count += 1;
		a[count] = num;
		return;	
	}
	


}

int Stack::pop(){
	if (count < 0){
		cout << " It is empty" << endl;
		return 0;
	}
	else{
		count -= 1;
		return a[count+1];
	}

}

int Stack::top(){
	if (count < 0){
		cout << " It is empty" << endl;
		return 0;
	}
	else{
		// cout << a[count] << endl;
		return a[count];
	}
	
}



int main(){

	Stack s(100);
	s.push(1);
	s.push(20);
	s.push(17);
	s.push(63);


	s.top();
	cout << s.pop() << " is removed" << endl;	
	// cout << s.pop() << " is removed" << endl;	

	if (s.Isempty()) {
		cout << "It is empty" << endl;
	}
	else{
		cout << "It is not empty" << endl;
	}

	s.top();

	cout << "Stack currently is " << endl;

	while(!s.Isempty()){
		cout << s.top() << " ";
		s.pop();
	}


	return 0;

}