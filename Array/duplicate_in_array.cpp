#include <iostream>
using namespace std ;


void duplicate(int arr[], int size){

	int i, j;
	for (i = 0; i < size; i++){
		for(j = i+1 ; j < size ; j++){
			if(arr[i] == arr[j]){
				cout << arr[i] << endl ;
			}
		}
	}

}

int main(){

	int arr[] = {1,5,7,4,6,5,1,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	duplicate(arr,size);



}