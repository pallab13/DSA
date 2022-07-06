#include <iostream>
#include <stack>
#include<string>
#include <algorithm>
using namespace std;

bool isOperator( char c){
	return !(isalpha(c) || isdigit(c));
}

string postfix_to_prefix( string s){

	stack <string> st;
	reverse(s.begin(), s.end());
	int len = s.length();
	string val1, val2, temp;

	for ( int i = 0; i <len; i++){
		if(!isOperator(s[i])){
			string str1(1, s[i]);
			st.push(str1);
		}

		else{
			val1 = st.top();
			st.pop();
			val2 = st.top();
			st.pop();
			temp = val1+val2+ s[i];
			st.push(temp);
		}
	}

	string res ;

	while(!st.empty()){
		res += st.top();
		st.pop();
	}

	return res;
}

int main(){

	string post_exp = "*-A/BC-/AKL";
	string res = postfix_to_prefix(post_exp);
	cout << res;

	return 0;
}