#include <iostream>
#include <vector>
using namespace std;

bool binary_search( vector <int> &vect, int first, int last, int key){
	int mid = first + (last-first)/2  ;
	if ((last -first) <= 1){
		if(vect[last] == key){
			return true;
		}
		else{
			return false;
		}
	}
	
	// if (first >= last){
	// 	return false;
	// }

	else {
		

		if (vect[mid] == key){
			return true;
		}

		else if (vect[mid] < key){
			return binary_search(vect, mid+1,last,key);
		}

		else{
			return binary_search(vect,first, mid, key);

		}

	}

	return false;
}

int main(){

	vector <int> vect = {1, 2, 3, 4, 5, 6};
	int key = 6;
	int last = vect.size();
	bool val = binary_search(vect, 0, last, key);

	if(val){
		cout << key <<" " <<"is found in the vector"<<endl;

	}
	else {
		cout << key <<" "<< "is not found in the vector"<<endl;
	}

	return 0;
}