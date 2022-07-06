#include <iostream>
#include <unordered_map>
using namespace std;


int main(){

	int arr[] = {  7, 3,1, -5, 7,-5,  3, -6, 7, 7, 4};
	unordered_map <int, int > uMap;
	int size = sizeof(arr)/sizeof(arr[0]); 
	cout << size << endl;
	int min = 0;
	for ( int i = size-1 ; i >= 0; i-- ){
		uMap[arr[i]]++;
	}
	for ( int i = size-1 ; i >= 0; i-- ){
		if(uMap[arr[i]] == 1 ){
			min = i;
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