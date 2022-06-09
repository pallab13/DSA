#include <iostream>
#include <string>
using namespace std;

void isNumber(string val){

	bool flag = true;

	int i;

	for(i = 0; i < val.length(); i++){
		if(!isdigit(val[i])){
			flag = false;
			break;
		}
	}

	if(flag){
		cout << "its a number";
	}
	else{
		cout << "its a string";
	}
}

int main(){
	string val;
	// cin >> val;
	val = "123s4";
	isNumber(val);
}