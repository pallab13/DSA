#include <iostream>
#include<stack>
using namespace std;

stack <int> st;

void move_at_bottom(int c){

	int temp;

	if(st.empty()){
		st.push(c);
	}
	else{
		temp = st.top();
		st.pop();
		move_at_bottom(c);
		st.push(temp);
	}

}

void reverse(){

	if(st.size() <= 0){
		return;
	}
	else{
		int c = st.top();
		st.pop();
		reverse();
		move_at_bottom(c); 
	}
}

int main(){

	
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);

	reverse();

	while(!st.empty()){
		cout << st.top() << endl;
		st.pop();
	}
	
	return 0;

}