#include <iostream>
#include <string>
using namespace std;


void character_set(string new_chracter_set, string new_input ){

	int length = new_chracter_set.length();
	int len_input = new_input.length();
	char hashChar[length];
	int i ;


	for( i = 0; i < length; i++){
		hashChar[new_chracter_set[i]-'a'] = 'a'+i;
	}

	for( i = 0; i < len_input; i++){
		new_input[i] = hashChar[new_input[i] - 'a'];
	}


	cout << new_input << endl;
}


int main(){

	string new_chracter_set = "qwertyuiopasdfghjklzxcvbnm";
	string new_input = "utta";
	character_set(new_chracter_set, new_input);

	return 0;
}