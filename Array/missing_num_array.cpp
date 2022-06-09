#include <iostream>
#include <vector>
using namespace std;



void missing_num( vector <int> arr, int size){
	int i, j,flag,temp;
	vector <int> test = {1,2,3,4,5,6,7};
	int test_size = test.size();

	for( i = 0; i < test_size; i++){
		for (j = 0;j < size; j++){
			if(test[i] == arr[j] ){
				flag = 1;
				break;
			}
			else{
				flag = 0;
				temp = test[i];
			}
		}

		if(flag == 0){
			break;
		}

	}

	if(flag == 0){
		cout << "Missing number is " << temp <<endl;
	}
	else {
		cout << "There is no missing number " <<endl;
	}

}


int main(){

	vector <int> vect = {1,2,3,4,5,7};

	missing_num(vect, vect.size());

	// cout << "missing number is " << num <<endl; 


	return 0;
}