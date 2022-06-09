#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

void Initial_Name(string name){

	cout << name[0] << " " ;
	int i = 1;

	for(i = 1; i < name.length()    ; i++){
		if(name[i] == ' '){
			cout << (char)toupper(name[i + 1 ]) << " " ;
		}
	}

}

int main(){
	string name;
	// cin >> val;
	name = "Pallab Mahato dada";
	Initial_Name(name);
}