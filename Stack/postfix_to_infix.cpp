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

string postfix_to_infix(string s){

	int i;
	int len = s.length();
	stack <string> st;
	string var1, var2;
	string temp;

	for(i = 0; i < len; i++){
		if( (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
			string c(1, s[i]);
			st.push(c);
		}
		else{
			var1 = st.top();
			st.pop();
			var2 = st.top();
			st.pop();
			temp = '('+ var2 + s[i]+ var1 + ')' ;
			st.push(temp);
		}
	}

	return st.top();

}


int main(){

	string s = "abcd^e-fgh*+^*+i-";
	string s2 = "ab*c+";
	cout << postfix_to_infix(s2);
	return 0;
}