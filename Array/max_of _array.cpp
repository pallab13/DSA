#include <iostream>
#include <vector>
using namespace std;

int max_of_arr(vector <int> &vect, int size){

	int i,j;
	int count ;
	int max_data;
	int max_count = 0;
	for (int i = 0; i < size; i++){
		count = 0;
		for (int j = 0; j < size; j++){
			if(vect[i] == vect [j]){
				count++ ;
			}
		}
		if (count > max_count){
			max_data = vect[i];
			max_count = count;
		}
		
	}
	// return max_count;
	cout << "The number "<< max_data << " repeats "<<max_count<< " times"<< endl;

	return 0;

}



int main(){

	vector <int> vect = {1,2,3,2,1,4,5,5,6,6,7,7,8,1};
	int size = vect.size();

	max_of_arr(vect, size);

	// cout << "The number "<< max_data << " repeats "<<max_arr<< " times"<< endl;
	return 0;



}