#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void majority_element(vector <int> &vect, int size){

	bool val = false;
	sort(vect.begin(),vect.end());
	int mid = size/2;
	int i;
	int count = 0;
	for(i = 0; i<size ; i++){
		if(vect[i] == vect[mid] ){
			count++;
		}
	}
	if(count> size/2){
		val = true;
	}

	if (val){
		cout << vect[mid]<<endl;
	}
	else{
		cout << "There is no majority element" << endl;

	}
}

int main(){


	vector <int> vect = {1,9,1,2,2,1,8,8,9,9,9,9,9,9,9,9} ;

	majority_element(vect, vect.size());

	return 0;
}