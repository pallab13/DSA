#include <iostream>
#include <queue>
using namespace std;


class Stack{

public:
	queue <int> q1, q2;

	void push(int data){
		while(!q1.empty()){
			q2.push(q1.front());
			q1.pop();
		}
		q1.push(data);
		while(!q2.empty()){
			q1.push(q2.front());
			q2.pop();;
		}
	}	

	void pop(){
		if(q1.empty()){
			cout << "It's already empty" << endl;
			return;
		}
		cout << q1.front() << " is removed " << endl;
		q1.pop();
	}

	void top(){
		if(q1.empty()){
			cout << "It's  empty" << endl;
			return;
		}
		cout << q1.front() << " is the top " << endl;
		// q1.pop();
	}


};


int main(){

	Stack st;
	st.push(4);
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