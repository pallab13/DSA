#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_of_arr(vector <int> vect, int size){

	sort(vect.begin(),vect.end());

// 	for(auto j = vect.begin(); j!= vect.end();++j ){
// 		cout<<*j;
// }

	int max_data,max_count,i;
	max_count = 0;
	int count = 1 ;
	for(i = 1; i < size; i++){
		if(vect[i] == vect [i-1]){
			count++;
		}

		else {
			if (count > max_count){
			max_count = count;
			max_data = vect[i-1];
			count = 0;
			}
			else{
				count = 0;
			}
		}

	    if(i == size-1){
			if (count > max_count){
			max_count = count;
			max_data = vect[i-1];
			}		
		}

	}
	cout << "The number "<< max_data << " repeats "<<max_count<< " times"<< endl;
	return 0;
}

int main(){


	vector <int> vect = {1,1,1,2,3,2,4,5,5,5,5,1,5,4,5,9,5,4,5,6,7,6,7,7,7,8,1,9,9,9,9,9,9,9,9,9};
	// vector <int> vect = {1,2,2};
	int size = vect.size();

	max_of_arr(vect, size);

	return 0;
}