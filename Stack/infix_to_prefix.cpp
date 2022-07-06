#include<iostream>
#include <string>
#include<stack>
#include<algorithm>
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

string reverse2(string original2){
	int len = original2.length();
	string rev_ori;
	int i;
	for( i = 0; i < len ; i++){
		if ( original2[len-1-i] == '('){
			rev_ori.push_back(')');
		}

		else if( original2[len-1-i] == ')'){
			rev_ori.push_back('(');
		}
		else{
			rev_ori.push_back(original2[len-1-i]);
		}
	}
	
	return rev_ori;
}
string reverse3(string original2){
	int len = original2.length();
	string rev_ori;
	int i;
	for( i = 0; i < len ; i++){
			rev_ori.push_back(original2[len-1-i]);
	}
	
	return rev_ori;
}

bool isOperator(char c)
{
    return (!isalpha(c) && !isdigit(c));
}

string infix_to_prefix(string s){

	s = '(' + s +')';
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

			if (isOperator(st.top())){

				if( s[i] == '^'){
					while( prec(st.top()) >= prec(s[i])){
						res+= st.top();
						st.pop();
					}
				}
				else{
					while( prec(st.top()) > prec(s[i])){
						res+= st.top();
						st.pop();
					}
				}
				st.push(s[i]); 

			}

		}	
	}
		while(!st.empty()){
			res += st.top();
			st.pop();
		}
	

	// cout << s<< endl;
	return res;


}


int main(){

	// // string s = "a+b*(c^d-e)^(f+g*h)-i";
	// string s =  ("x+y*z/w+u");
	// string rev_s = reverse2(s); 
	// cout << rev_s << endl;
	// string rev_s_new = '('+rev_s+ ')';
	// string res = infix_to_prefix(rev_s_new);
	// // cout << reverse3(res);
	// return 0;

	// string s = "a+b*(c^d-e)^(f+g*h)-i";
	string s =  ("x+y*z/w+u");
	reverse(s.begin(), s.end()); 
	int l = s.length();
	for (int i = 0; i < l; i++) {
 
        if (s[i] == '(') {
            s[i] = ')';
            i++;
        }
        else if (s[i] == ')') {
            s[i] = '(';
            i++;
        }
    }

	cout << s << endl;
	string res = infix_to_prefix(s);
	reverse(res.begin(), res.end());
	cout <<res <<endl;
	return 0;

	

}