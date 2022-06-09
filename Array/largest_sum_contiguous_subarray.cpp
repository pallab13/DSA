#include <iostream>
#include <vector>
using namespace std;

int max_sub_array_sum(int arr[],int size){

	int i = 0;
	int j;
	int current_max = arr[0];
	int current_sum ;
	for (i = 0; i < size; i++){
		current_sum = 0;
		for (j = i; j < size; j++){
			current_sum += arr[j] ; 
			if (current_max < current_sum){
				current_max = current_sum;
			}
		}

	}
	return current_max;

}

int main(){

	int arr[] = {1,-2,3,4,-4,6,-14,8,2};
	int max,size;
	size = sizeof(arr)/sizeof(arr[0]);

	max = max_sub_array_sum(arr, size );
	cout<<max<<endl;

}

// int maxSubArraySum(std::vector<int> &a)
// {
// int size = a.size();
// int maxSoFar = 0, maxEndingHere = 0;
// for (int i = 0; i < size; i++)
// {maxEndingHere = maxEndingHere + a[i];
// if (maxEndingHere < 0)
// maxEndingHere = 0;
// if (maxSoFar < maxEndingHere)
// maxSoFar = maxEndingHere;
// }
// return maxSoFar;}

// int main() {
// std::vector<int> arr = { 1,-2,3,4,-4,6,-14,8,2 };
// std::cout << "Max sub array sum :" << maxSubArraySum(arr);
// }