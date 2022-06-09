#include <iostream>
#include <vector>
using namespace std;


void bubble_sort( vector <int> &arr, int size){

	int i, j,temp;

	for(i = 0; i < size; i++){
		for(j = 0; j < size-i-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}

		}
	}



}

int main(){

	vector <int> vect = {1,5,4,3,6,8};
	bubble_sort(vect, vect.size());
	int k;
	for ( k = 0; k < vect.size(); k++){
		cout << vect[k]<< " " ;
	}

	return 0;
}