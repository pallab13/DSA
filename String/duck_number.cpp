#include <iostream>
#include <string>

using namespace std;

void duck_number(string name){

	bool flag = false;
	int len = name.length();
	int i = 0;

	while(name[i] == '0'){
		i++;
	}


	for (int j = i ; j < len; j++){
		if(name[j] == '0'){
			flag = true;
		}
	}

	if(flag){
		cout << " It's a duck number" ;
	}
	else{
		cout << " It's not a duck number" ;
	}

	
}

int main(){
	string name;
	// cin >> val;
	name = "00123";
	duck_number(name);

}