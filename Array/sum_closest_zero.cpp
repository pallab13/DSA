#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sum_zero(vector <int> arr, int size){

	sort(arr.begin(), arr.end());
	int first = 0;
	int last = size -1;
	int sum ;
	int min_first, min_last;
	
	if (size < 2 ){
		cout << "Invalid input "<< endl;
		return;
	}
	int min_sum = arr[first]+ arr[last];

	while(first < last) {
		sum = arr[first]+ arr[last];

		if(abs(sum) < abs(min_sum)){
			min_sum = abs(sum);
			min_first = first;
			min_last = last;
		}

		if (sum < 0){
			first++;
		}
		else if (sum > 0){
			last--;
		}
		else
			break;
	}

	cout << arr[min_first] << "  end  " << arr[min_last] << endl;;


} 

int main(){

	vector <int> vect = {-2,-6,9,76,8};
	int size = vect.size();
	sum_zero(vect, size);


	return 0;
}