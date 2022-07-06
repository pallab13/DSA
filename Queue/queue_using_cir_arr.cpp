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
		if( (rear+1)%capacity == front){
			cout << "It's already full"<<endl;
			return;
		}

		if (front == -1 ){
			front = 0;
		}
	
		rear = (rear+1)%capacity;
		arr[rear] = data;
		
	}

	void dequeue(){
		if(front == -1){
			cout << "It's already empty"<<endl;
			return;
		}
		int res = arr[front];
		if(front == rear){
			front = -1;
			rear = -1;
			return;
		}
		cout << res << " is removed" <<endl;
		front++;
	}

	void printQueue(){
		if (front == -1 && rear == -1){
			cout << "Its empty Dada " << endl;
			return;
		}
		if(front <= rear){
			for(int i = front; i <=rear; i++){
				cout << temp_arr[i]<< " ";
			}
		}
		else{
			for(int i = front; i < capacity; i++){
				cout << temp_arr[i]<< " ";
			}
			for(int i = 0; i < rear; i++){
				cout << temp_arr[i]<< " ";
			}

		}
		cout <<endl;

	}



};

int main(){

	int size = 3;
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
	// q.dequeue();
	q.printQueue();
	q.dequeue();
	q.dequeue();
	q.printQueue();
	q.dequeue();


	


	return 0;
}