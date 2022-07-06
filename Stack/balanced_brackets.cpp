#include <iostream>
#include<string>
#include <stack>
using namespace std;


void balanced_brackets( string str){

	int i;
	stack <char> st;
	int len = str.length();

	for(i = 0; i < len; i++){

		if(st.empty()){
			st.push(str[i]);
		}
		else if(str[i] == '(' || str[i] == '{'  || str[i] == '[' ){
			st.push(str[i]);
		}
		else{
			if(str[i] == ')' && st.top() == '('){
				st.pop();
				// continue;
			}
			else if(str[i] == '}' && st.top() == '{'){
				st.pop();
				// continue;
			}
			else if(str[i] == ']' && st.top() == '['){
				st.pop();
				// continue;
			}
			else{
				st.push(str[i]);
			}
			// else{
			// 	cout << "Not balanced" <<endl;;
			// 	return false;
			// }
		}



	}
	if(st.empty()){
		cout << "balanced"<<endl;
	}
	else{
		cout << "not balanced"<<endl;
	}
	
	// return true;
}

int main(){

	string s = "{()}[]" ;
	string s2 = "[()]{}{[()()]()}" ;
	string s3 = "[(])" ;

	balanced_brackets(s);
	balanced_brackets(s2);
	balanced_brackets(s3);


}