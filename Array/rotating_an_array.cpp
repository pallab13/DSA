#include <iostream>
using namespace std ;

int *rotating_an_array(int arr[], int size, int num ){
	int i = 0;
	static int temp[6] ;
	int num2 = num%size;
	// cout<< num2<<endl;
	// temp[0] = arr[5];
	// temp[1] = arr[4];
	for (i=0;i<size-num2;i++){
		temp[i] = arr[i+num2];
	}
	for (i=size-num2;i<size;i++){
		temp[i] = arr[i-size+num2];
	}
	return temp;


}

int main(){
	int arr[6] = {10,20,30,40,50,60};
	int size,num;
	// size = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	num = 7; 
	size = 6;
	int* ball = rotating_an_array(arr,size,num);
	for (i=0; i<6;i++){
		cout<<ball[i]<<endl;
	}
	

	return 0;
}