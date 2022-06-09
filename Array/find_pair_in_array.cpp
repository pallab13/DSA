#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void pair_arr(vector <int> arr,int first,int last,int value){
	sort(arr.begin(),arr.end());
	int flag = 0;
	while(first < last){
		if((arr[first] + arr[last]) == value ){
			flag = 1 ; 
			break;
		}
		else {
			if((arr[first] + arr[last]) > value ){
				last = last-1;
			}
			else{
				first +=1;
				
			}

		}

	}	
	if(flag){
		cout << arr[first] << " and " << arr[last]<<endl;
	}
	else{
		cout << "not found" << endl;
	}
	


}

int main(){
	vector <int> vect = {1,5,7,3,5,9,76,5,87,11,45};
	int size = vect.size();
	int value = 9;
	pair_arr(vect, 0, size-1, value);


	return 0;
}