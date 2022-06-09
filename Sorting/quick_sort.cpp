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

void quick_sort(int arr[], int left, int right){
	
	if(left<right){
		int index = partition(arr, left, right);
		quick_sort(arr, 0, index-1);
		quick_sort(arr, index+1, right);
	}

}


int main(){

	int arr[] = {1,5,4,3,6,8};
	int size = sizeof(arr)/sizeof(arr[0]);

	quick_sort(arr, 0, size-1 );
	int k;
	for ( k = 0; k < size; k++){
		cout << arr[k]<< " " ;
	}



	return 0;
}