// Quick way to check if all the characters of a string are same


#include <iostream>
#include <string>
using namespace std;

void ischaracter(string val){

	char flag = val[0];

	int i;

	for(i = 1; i < val.length(); i++){
		if(val[i] != flag){
			flag = false;
			break;
		}
	}

	if(flag){
		cout << "its all same";
	}
	else{
		cout << "Not all are same";
	}
}

int main(){
	string val;
	// cin >> val;
	val = "1111";
	ischaracter(val);
}