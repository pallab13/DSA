#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



void duplicate_in_vector_sorted(vector <int> &vect, int size){

	sort(vect.begin(), vect.end());
	int i;

	for(i = 1; i < size; i++){
		if(vect[i] == vect[i-1]){
			cout << vect[i]<<endl;
		}
	}


}

int main(){

	vector <int> vect = {1,5,7,4,6,5,1,7};
	duplicate_in_vector_sorted(vect, vect.size());


}