#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector <int> &vect, int size){

	int i,temp,j;

	for(i = 1; i < size; i++){

		temp = vect[i];
		j = i-1;

		while(vect[j] > temp && j>=0){
			vect[j+1] = vect[j];
			j--;
		}

		vect[j+1] = temp;

	}


}


int main(){

	vector <int> vect = {5,4,3,6,1,8};
	insertion_sort(vect, vect.size());
	int k;
	for ( k = 0; k < vect.size(); k++){
		cout << vect[k]<< " " ;
	}


	return 0;
}