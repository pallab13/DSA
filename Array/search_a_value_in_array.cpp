#include <iostream>
using namespace std;

void search(int arr[],int size,int val){
	int i = 0;
	bool Flag = 0;
	for (i=0;i<size;i++){
		if (arr[i] == val){
			Flag = 1;
		}
		
	}	

	if (Flag == 1){
		cout << "It is found" <<endl;
	}
	else {
		cout << "It is not found"<<endl;
	}

}

int main(){
	int value,size;
	cin>> value;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10} ;
	size = sizeof(arr)/sizeof(arr[0]);
	search(arr,size,value);

	return 0;
}