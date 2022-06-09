
#include <iostream>
#include <vector>
using namespace std;


void merge(int arr[], int left,int mid, int right){

	int n1, n2;
	
	n1 = mid-left+1;
	n2 = right-mid;

	int arr1[n1];
	int arr2[n2];
	int i,j;
	for(i = 0; i < n1; i++ ){
		arr1[i] = arr[left + i];
	}
	for(j = 0; j < n2; j++ ){
		arr2[j] = arr[mid+1 +j];
	}
	i = 0; 
	j = 0; 
	int k = left; 

	while(i < n1 && j < n2){
		if(arr1[i] < arr2[j]){
			arr[k] = arr1[i];
			k++;
			i++;
		}

		else{
			arr[k] = arr2[j];
			k++;
			j++;
		}
	}
	while(i < n1){
		arr[k] = arr1[i];
			k++;
			i++;
	}

	while(j < n2){
		arr[k] = arr2[j];
			k++;
			j++;
	}


	
}

void merge_sort(int arr[], int left, int right){

	
	if(left < right){
		int mid = (left+right)/2;
		merge_sort(arr,left, mid );
		merge_sort(arr, mid+1, right);
		merge(arr,left,mid,right);
	}


}


int main(){

	int arr[] = {1,5,4,3,6,8};
	int size = 6;
	merge_sort(arr, 0, size-1 );
	int k;
	for ( k = 0; k < size; k++){
		cout << arr[k]<< " " ;
	}



	return 0;
}



// #include <iostream>
// #include <vector>
// using namespace std;


// void merge(vector <int> &arr, int left,int mid, int right){

// 	int n1, n2;
	
// 	n1 = mid-left+1;
// 	n2 = right-mid;

// 	vector <int> arr1	;
// 	vector <int> arr2;
// 	int i,j;
// 	for(i = 0; i < n1; i++ ){
// 		arr1[i] = arr[left + i];
// 	}
// 	for(j = 0; j < n2; j++ ){
// 		arr2[j] = arr[mid+1 +j];
// 	}
// 	i = 0; 
// 	j = 0; 
// 	int k = left; 

// 	while(i < n1 && j < n2){
// 		if(arr1[i] < arr2[j]){
// 			arr[k] = arr1[i];
// 			k++;
// 			i++;
// 		}

// 		else{
// 			arr[k] = arr2[j];
// 			k++;
// 			j++;
// 		}
// 	}
// 	while(i < n1){
// 		arr[k] = arr1[i];
// 			k++;
// 			i++;
// 	}

// 	while(j < n2){
// 		arr[k] = arr2[j];
// 			k++;
// 			j++;
// 	}


	
// }

// void merge_sort(vector <int> &arr, int left, int right){

// 	int mid = (left+right)/2;
// 	if(left < right){
// 		merge_sort(arr,left, mid );
// 		merge_sort(arr, mid+1, right);
// 		merge(arr,left,mid,right);
// 	}


// }


// int main(){

// 	vector <int> arr = {1,5,4,3,6,8};
// 	merge_sort(arr, 0, arr.size() -1 );
// 	int k;
// 	for ( k = 0; k < arr.size(); k++){
// 		cout << arr[k]<< " " ;
// 	}



// 	return 0;
// }



