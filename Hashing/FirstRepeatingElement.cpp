#include <iostream>
#include <unordered_set>
using namespace std;


int main(){

	int arr[] = { 7,  3, -5, 7, 3, -6, 7, 7, 4};
	unordered_set <int > uSet;
	int size = sizeof(arr)/sizeof(arr[0]); 
	// cout << size << endl;
	int min = 0;
	for ( int i = size-1 ; i >= 0; i-- ){
		if(uSet.find(arr[i]) != uSet.end()){
			min = i;
		}
		else{
			uSet.insert(arr[i]);
		}
	}

	cout << arr[min] << endl;

	// for( int j = 0; j < size; j++){
	// 	if(uMap[arr[j]] == 1){
	// 		cout << arr[j] << " ";
	// 		// return 0;
	// 	}
		
	// }

	return 0;
}