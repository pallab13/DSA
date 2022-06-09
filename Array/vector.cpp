#include <iostream>
using namespace	std;

int sum(int arr[], int size){
	int sum_temp = 0 ;
	int i = 0;
	for (i =0 ; i<size;i++){
		sum_temp += arr[i];

	} 
	cout << sum_temp<<endl;

	return 0;

};

int main(){

	int arr[] = {1,2,5,6};
	int size;
	size = sizeof(arr)/sizeof(arr[0]);
	sum (arr, size);
	return 0;

}