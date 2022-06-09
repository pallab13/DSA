#include <iostream>
using namespace std;

void Print_arr(int arr[], int size){

	int i ;
	for (i = 0; i< size ; i++ ){
		cout<<arr[i]<<"";
	}
	printf("\n");
}

void permutation(int arr[], int left, int right){

	int i ;
	if (left == right ){
		Print_arr(arr,right);
	}
	else{
		for(i = left; i<right; i++){
			swap( arr[left], arr[i]);
			permutation(arr,(left +1) ,right );
			swap( arr[left], arr[i]);

		}

	}
}

int main(){
	int arr[] = {1,2,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	permutation(arr,0,size );



	return 0; 
}  