#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void maxima(vector <int> vect, int size){
	int first = 0;
	int last = size -1;
	int mid = (first+last)/2;
	int maxi ;
	int flag = 0;
	if (size <=2){
		cout << "Invalid" << endl;
		return ;
	}

	while(first< last){
		mid = (first+last)/2;
		if( vect[mid] > vect[mid+1] && vect[mid] > vect[mid-1]){
			maxi = vect[mid];
			flag = 1;
			break;
		}
		else if(vect[mid] > vect[mid+1] && vect[mid] < vect[mid-1]){
			last = mid -1;
		}	
		else if(vect[mid] < vect[mid+1] && vect[mid] > vect[mid-1]){
			first = mid+1;
		}	
		else{
			break;
		}

	}

	if (flag){

		cout << "The maximum element is " << maxi << endl;
	}

}


int main(){

	vector <int> vect = {1,2,3,7,9,67,56,45,32,13};

	maxima(vect, vect.size());
	return 0;
}