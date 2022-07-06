#include <iostream>
#include <stack>
using namespace std;

void next_greater_element(int arr[], int size){
	stack <int> st;
	int i;
	int j = size -1;
	int* temp_arr = new int[size];


	for(i = size-1; i >= 0; i--){
		while(!st.empty() && arr[i] > st.top()){
			st.pop();
		}

		if(st.empty()){
			temp_arr[j] = -1;
			j--;
		}
		else{
			temp_arr[j] = st.top();
			j-- ;
		}

		st.push(arr[i]);
	}

	for(int k = 0; k < size ; k++){
		cout << temp_arr[k] << " " ;
	}
}

int main(){

	int arr[] = {11, 13, 21, 3, 5};
	int size = sizeof(arr)/sizeof(arr[0]);

	next_greater_element(arr, size);

	return 0;
}