#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void find_pair( vector <int> arr1, vector <int> arr2, int size1, int size2, int value){

	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());
	int flag = 0;
	int first1 = 0, last1 = size1 -1, first2 = 0, last2 = size2-1;
	while(first1 <size1 && last2 >=0){
		if((arr1[first1] + arr2[last2]) == value ){
			flag = 1 ; 
			break;
		}
		else {
			if((arr1[first1] + arr2[last2]) > value ){
				last2 = last2-1;
			}
			else{
				first1 +=1;
				
			}

	}
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