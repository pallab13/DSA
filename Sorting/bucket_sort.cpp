#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucket_sort(float arr[], int size, int divider){

	// int divider = int(max(arr)) -int(min(arr)) +1;
	vector <float> vect[divider];

	int i, j;

	for (i = 0; i < size; i++){
		vect[int(size*arr[i])].push_back(arr[i]);
	}

	for (i = 0; i < divider; i++){
		sort(vect[i].begin(), vect[i].end());

	}

	// for (int i = 0; i < vect.size(); i++){
 //        cout << vect[i] << " ";
	// }

	int index = 0;
	// for ( i = 0; i < size; i++ ){
	// 	while(!vect[i].empty()){
	// 		arr[index++] = *(vect[i].begin() );
	// 		vect[i].erase(vect[i].begin()) ;
	// 				}
	// }

	for(i = 0; i < divider; i++){
		for(j = 0; j < vect[i].size() ; j++){
			arr[index] = vect[i][j];
			index++;
		}
	}
}


int main(){

	float arr[] = {0.25, 0.36, 0.38, 0.41, 0.29, 1.22, 0.45, 0.79, 0.01, 0.69};
	int size = sizeof(arr)/sizeof(arr[0]);
	// int divider = int(max(arr)) -int(min(arr)) +1;
	int divider = 20;
	bucket_sort(arr, size, divider);
	int k;
	for ( k = 0; k < size; k++){
		cout << arr[k]<< " " ;
	}
}