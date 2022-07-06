#include<iostream>
#include <stack>
using namespace std;


int* next_smaller_element(int arr[], int size){
	stack <int> st;
	int i;
	int j = size -2;
	int* temp_arr = new int[size];
	st.push(size-1);
	// cout << size <<endl;
	temp_arr[size-1] = size;

	for(i = size-2; i >= 0; i--){
		while(!st.empty() && arr[i] < arr[st.top()]){
			st.pop();
		}

		if(st.empty()){
			temp_arr[j] = size;
			j--;
		}
		else{
			temp_arr[j] = st.top();
			j-- ;
		}

		st.push(i);
	}

	return temp_arr;
}



int* prev_smaller_element(int arr[], int size){
	stack <int> st;
	int i;
	int j = 1;
	int* temp_arr = new int[size];
	st.push(0);
	temp_arr[0] = -1;


	for(i = 1; i < size; i++){
		while(!st.empty() && arr[i] < arr[st.top()]){
			st.pop();
		}

		if(st.empty()){
			temp_arr[j] = -1;
			j++;
		}
		else{
			temp_arr[j] = st.top();
			j++;
		}

		st.push(i);
	}

	return temp_arr;
}


int getMaxArea(int hist[], int size){

	int i;
	int max_area = hist[0];
	int* prev_arr = prev_smaller_element(hist, size);
	int* next_arr = next_smaller_element(hist, size);
	for( i = 0; i < size; i++){
		int new_area = hist[i]*(next_arr[i] - prev_arr[i] -1);
		if( new_area >= max_area){
			max_area = new_area;
		}
	}

	return max_area;

}





int main(){
    int hist[] = {6, 2, 5, 4, 5, 1, 6};
    // int hist[] = {11, 13, 21, 6, 5};
    int n = sizeof(hist)/sizeof(hist[0]);
    prev_smaller_element(hist, n);
    cout << "Maximum area is " << getMaxArea(hist, n);
    return 0;
}