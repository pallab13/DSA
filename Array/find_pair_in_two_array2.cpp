#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



void find_pair( vector <int> arr1, vector <int> arr2, int size1, int size2, int value){

	sort(arr2.begin(), arr2.end());
	int flag = 0;
	for (i = 0; i<size1; i++){
		
	}
	
	if(flag){
		cout << arr1[first1] << " and " << arr2[last2]<<endl;
	}
	else{
		cout << "not found" << endl;
	}
	


}




int main(){
	vector <int> vect1 = {1,5,7,3,5,9,76,5,87,11,45};
	vector <int> vect2 = {1,8,4,3,15,93,56,98,7,16,65};
	int size1 = vect1.size();
	int size2 = vect2.size();
	int value = 132;
	find_pair(vect1, vect2, size1, size2, value);


	return 0;
}