#include <iostream>
using namespace std;

bool linear_search_sorted(int arr[], int size, int key){

	int i ;

	for(i = 0; i < size; i++ ){
		if(arr[i] == key){
			return true;
		}
		else if (arr[i] > key){
			return false;

		}

	}
	return false;

}

int main(){

	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(arr)/sizeof(arr[0]);
	int key = 15;

	bool val = linear_search_sorted(arr, size, key);

	if(val){
		cout << key <<" " <<"is found in the array"<<endl;

	}
	else {
		cout << key <<" "<< "is not found in the array"<<endl;
	}


	return 0;
}