#include <iostream>
using namespace std;

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int left, int right){

	int pivot = arr[right];
	int index = left;
	int i;

	for( i = left; i < right; i++){

		if(pivot >= arr[i]){
			swap(arr[index], arr[i]);
			index++;
		}

	}
	
	swap(arr[i], arr[index]);
	return index;
}

int quick_select(int arr[], int left, int right, int k){
	

	if(left<right){

		int index = partition(arr, left, right);
		
		if (k == index){
			return arr[k];
		}
		else if ( k < index){
			return quick_select(arr, left, index-1,k);
		}
		else{
			return quick_select(arr, index+1, right,k);
		}

	}

	return -1;
}



int main(){

	int arr[] = {1,5,4,3,6,8};
	int size = sizeof(arr)/sizeof(arr[0]);
	int k = 6;
	int val = quick_select(arr, 0, 5 ,k-1);
	cout << val;

	return 0;
}