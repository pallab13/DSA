#include<iostream>
#include <string>
#include<stack>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infix_to_postfix(string s){

	int len = s.length();
	int i;
	stack <char> st;
	string res;

	for (i = 0; i < len; i++ ){
		if( (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
			res += s[i];
		}
		else if (s[i] == '('){
			st.push('(');
		}

		else if(s[i] == ')'){
			while(st.top() != '('){
				res += st.top();
				st.pop();
			}
			st.pop();
		}

		else{
			while(!st.empty() && prec(st.top()) >= prec(s[i])){
				if(st.top() == '^' && s[i] == '^'){
					break;
				}
				else{
					res+= st.top();
					st.pop();
				}
			}
			st.push(s[i]); 

		}
	}
	while(!st.empty()){
		res += st.top();
		st.pop();
	}
	cout << s<< endl;
	return res;


}


int main(){

	string s = "a+b*(c^d-e)^(f+g*h)-i";
	cout << infix_to_postfix(s);
	return 0;
}