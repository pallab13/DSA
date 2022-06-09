#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int value){
	int mid = size/2 - 1 ;
	if (size<=1){
		if (arr[0] == value){
			return 1;	
		}
		else {
			return 0;	
		}

	}
	else {

		if (arr[mid] == value){
			return 1;
			
		}
		else if ( arr[mid]> value){
			;
			size = mid +1 ;
			int temp_arr1[size];
			// size = sizeof (arr[0:mid]) /sizeof(arr[0]);
			int i = 0 ;
			for(i = 0;i<size; i++){
				temp_arr1[i] = arr [i];
			}
			
			return binary_search(temp_arr1,size,value);
		}

		else if  ( arr[mid]<value){
			int temp_tot = size;
			size = temp_tot -mid-1;
			int temp_arr2[size];
			// size = sizeof(arr[(mid+1):])/sizeof(arr[-1]);
			// binary_search(arr[:mid],size,value);
			int i = 0 ;
			for(i = mid+1 ;i<temp_tot; i++){
				temp_arr2[i-mid-1] = arr [i];
			}
			
			return binary_search(temp_arr2,size,value);
		}

		else{ 
		return 0;
		
		}

	  }

	  
	return 0 ;

}


int main(){
	int value;
	// int arr[10];
	value = 23;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(arr)/sizeof(arr[0]);
	// cout<<size<<endl;

	int temp = binary_search(arr,size,value);

	cout << temp <<endl;

	

	return 0;
}
