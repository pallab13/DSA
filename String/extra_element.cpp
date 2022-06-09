#include <iostream>
#include <string>
using namespace std;

void extra_element(string strA, string strB){

	int lenA = strA.length();
	int lenB = strB.length();
	int i ;
	bool val;

	for( i = 0; i < lenB; i++){
		val = false;
		for(int j = 0; j <lenA; j++){
			if(strB[i] == strA[j]){
				val = true;
				break;			}
		}
		if(!val){
			cout << strB[i] << endl;
			break;
		}

	}

	

}


int main(){

	string strA = "kxmbl";
	string strB = "kxcmbl";

	extra_element(strA, strB);
}