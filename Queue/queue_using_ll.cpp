#include<iostream>
using namespace std;

class Node{
	
	public:
		int data;
		Node* next;
		Node(int new_data){
			this->data = new_data;
			this->	next = NULL;
		}
};

class Queue{
	public:
		Node* front = NULL;
		Node* rear = NULL;
	
		void enqueue(int data){
			Node* new_node = new Node(data);
			if(front == NULL){
				front = new_node;
				rear = new_node;
				
			}
			else{
				rear->next = new_node;
				rear = new_node;
			}
		}



	void dequeue(){
		if(front == NULL){
			cout << " There is no elements to pop " << endl;
		}
		else{
			int val = front->data;
			cout << val << " is removed" <<endl;
			front = front->next;
		}

}
	void printQueue(){
		Node* temp = front;
		if(temp == NULL){
			cout << "No element in queue" << endl;
			return;
		}
		while(temp){
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

};





int main()
{
	Queue make_queue;
	make_queue.printQueue();
	make_queue.enqueue(2);
	make_queue.enqueue(3);
	make_queue.enqueue(4);
	make_queue.enqueue(5);
	make_queue.printQueue();
	make_queue.dequeue();
	make_queue.dequeue();
	make_queue.dequeue();
	make_queue.printQueue();
	make_queue.dequeue();
	make_queue.printQueue();

	// enqueue()
	return 0;
}