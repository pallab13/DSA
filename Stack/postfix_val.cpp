#include <iostream>
#include<string>
#include <stack>
#include <algorithm>
using namespace std;


int val_postfix( string s){

	int i;
	stack <int> st;
	int len = s.length();
	int val1, val2, val;

	for( i = 0; i < len; i++){

		if(isdigit(s[i])){
			st.push(s[i] - '0');
		}
		else if(s[i] == '*'){
			val1 = st.top();
			st.pop();
			val2 = st.top();
			st.pop();
			val = val2* val1;
			st.push(val);
		}

		else if(s[i] == '/'){
			val1 = st.top();
			st.pop();
			val2 = st.top();
			st.pop();
			val = val2/val1;
			st.push(val);
		}
		else if (s[i] == '-')	{
			val1 = st.top();
			st.pop();
			val2 = st.top();
			st.pop();
			val = val2- val1;
			st.push(val);
		}
		else if (s[i] == '+'){
			val1 = st.top();
			st.pop();
			val2 = st.top();
			st.pop();
			val = val2 + val1;
			st.push(val);
		}
	}
	return st.top();

}

int main(){

	string s = "231*+9-" ;

	cout << val_postfix(s);




	return 0;
}