#include <iostream>
#include <queue>
using namespace std;


class Stack{

public:
	queue <int> q1, q2;

	void push(int data){
		q1.push(data);
	}	

	void pop(){
		if(q1.size() == 0 ){
			cout << "It's already empty" << endl;
			return;
		}
		while(q1.size() != 1){
			q2.push(q1.front());
			q1.pop();
		}
		cout << q1.front()<<" is the removed element" << endl;
		q1.pop();
		queue <int> temp = q1;
		q1 = q2;
		q2 = temp;
	}

	void top(){
		queue <int> temp_q1, temp_q2;
		temp_q1 = q1;
		temp_q2 = q2;
		if(temp_q1.size() == 0 ){
			cout << "It's empty" << endl;
			return;
		}

		while(temp_q1.size() != 1){
			temp_q2.push(temp_q1.front());
			temp_q1.pop();
		}

		cout << temp_q1.front()<<" is the top element" << endl;

	}


};


int main(){

	Stack st;
	st.push(4);
	st.top();
	st.push(3);
	st.push(2);
	st.top();
	st.push(1);
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	return 0;
}