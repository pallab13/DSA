#include <iostream>
#include <vector>
using namespace std;

void swap(int* first, int * last){
	int temp = *first;
	*first = *last;
	*last = temp;

}


void selection_sort( vector <int> &arr, int size){

	int i,j;
	int temp_min;
	for(i = 0; i < size ; i++){
		temp_min = i;
		for(j = i; j < size; j++){
			if(arr[j] < arr[temp_min]){
				temp_min = j;
			}
		}
		swap(arr[i] ,arr[temp_min]);
	}

	



}

int main(){

	vector <int> vect = {1,5,4,3,6,8};
	selection_sort(vect, vect.size());
	int k;
	for ( k = 0; k < vect.size(); k++){
		cout << vect[k]<< " " ;
	}

	return 0;
}