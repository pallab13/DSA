#include<iostream>
#include<stack>
using namespace std;

void stock_span( int arr[], int size){

	int i;
	stack <int> st;
	int* new_arr = new int[size];
	new_arr[0] = 1;
	st.push(0);

	for ( i = 1; i < size; i++){

		while(!st.empty() && arr[i] >= arr[st.top()]){
			st.pop();
		}

		if(st.empty()){
			new_arr[i] = i + 1;
		}
		else{
			new_arr[i] = i -st.top();

		}
		st.push(i);
	}

	for (int k = 0; k < size; k++){
		cout << new_arr[k] << " ";
	}
}



int main(){

	// int arr[] =  {100, 80, 60, 70, 60, 75, 85};
	int arr[] = { 10, 4, 5, 90, 120, 80 };
	int size = sizeof(arr)/sizeof(arr[0]);

	stock_span(arr, size);

	return 0;

}