#include <iostream>
#include <vector>
using namespace std;

void majority_element(vector <int> &vect, int size){

	int i,j,count;
	bool val = false;
	int major;

	for(i = 0; i< size ; i++ ){
		int count = 0;
		for(j = 0; j < size; j++){
			if(vect[i] == vect[j]){
				count++;
			}
		}

		if(count > (size/2)){
			// cout << vect[i]<<endl;
			major = vect[i];
			val = true;
		}
	}
	if (val){
		cout << major<<endl;
	}
	else{
		cout << "There is no majority element" << endl;

	}





}

int main(){

	vector <int> vect = {1,1,1,2,1,8,8,8,9,9,9,9,9,9,9,9} ;

	majority_element(vect, vect.size());


	return 0;
}