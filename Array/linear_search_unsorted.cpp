#include <iostream>
using namespace std;

bool linear_search_unsorted(int arr[],int size, int key){
	int i = 0;
	for(i = 0; i<size; i++){
		if (arr[i] == key){
			return true;
		}
	}
	return false;

}

int main(){

	int arr[] = {1,24,5,8,3,56,2};
	int key = 34;
	int size = sizeof(arr)/sizeof(arr[0]);
	bool val = linear_search_unsorted(arr,size, key);

	if(val){
		cout << key <<" " <<"is found in the array"<<endl;

	}
	else {
		cout << key <<" "<< "is not found in the array"<<endl;
	}





	return 0;
}