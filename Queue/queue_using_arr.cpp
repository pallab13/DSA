#include <iostream>
using namespace std;


class Queue{


public:

	int* arr;
	int front = -1;
	int rear = -1;
	int capacity;
	Queue(int size){
		this->capacity = size;
		arr = new int[capacity];
	}

	void enqueue(int data){
		front = 0;
		if(rear == - 1){
			rear++;
			arr[rear] = data;
		}
		else if(rear == capacity -1 ){
			cout << "It is already full" <<endl;;
			return;
		}
		else{
			rear++;
			arr[rear] = data;
		}

	}

	void dequeue(){

		if(rear == -1){
			cout << "It's already empty " << endl;
			return;
		}
		else if(rear == 0){
			front = -1;
			rear = -1;
		}
		else{
			for(int i = 0; i <rear; i++ ){
				arr[i] = arr[i+1];
			}
			rear -= 1;
		}

	}

	void printQueue(){
		if(rear < 0){
			cout << "No elements" <<endl;
			return;
		}
		for( int i = 0; i <= rear; i++){
			cout << arr[i] << " ";
		}
		cout << endl;

	}



};

int main(){

	int size = 4;
	Queue q(size);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.printQueue();
	q.enqueue(4);
	q.printQueue();
	q.enqueue(5);
	q.printQueue();
	q.dequeue();
	q.dequeue();
	q.printQueue();
	q.dequeue();
	q.dequeue();
	q.printQueue();
	q.dequeue();


	


	return 0;
}