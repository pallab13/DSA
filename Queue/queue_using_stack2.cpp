#include <iostream>
#include <stack>
using namespace std;


class Queue{

public:
	stack <int> st1, st2;


	void dequeue(){

		if(st1.empty()){
			cout << "It's already empty " <<endl;
			return;
		}
		while(!st1.empty()){
			st2.push(st1.top());
			st1.pop();
		}
		int result = st2.top();
		st2.pop();
		while(!st2.empty()){
			st1.push(st2.top());
			st2.pop();
		}

		cout << result << " is removed" <<endl;;


	}


	void enqueue(int data){
		st1.push(data);
	}

	// void printQueue(){


	// }

};


int main(){

	
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	// q.printQueue();
	q.enqueue(4);
	// q.printQueue();
	// q.enqueue(5);
	// q.printQueue();
	q.dequeue();
	q.dequeue();
	// q.printQueue();
	q.dequeue();
	q.dequeue();
	// q.printQueue();
	q.dequeue();


	


	return 0;
}