#include <iostream>
#include <vector>
using namespace std;

void boyer_moore(vector <int> vect, int size){

	int i;
	int count = 0;
	int pros_majority ;

	for(i = 0; i < size; i++){
		if(count == 0){
			count = 1;
			pros_majority = vect[i];
		}

		else {

			if(vect[i] == pros_majority ){
				count++;
			}
			else{
				count--;
			}
			
		}
		
	}

	count = 0;
	for( i = 0; i < size; i++){
		if(vect[i] == pros_majority){
			count++;
		}

	}
	if(count > (size/2)){
		cout << "The majority element is " << pros_majority <<endl;
	}
	else{
		cout << "The majority element does not exist" << endl;
	}
	


}


int main(){

	vector <int> vect = {1,1,2,2,1,8,8,9,9,9,9,9,9,9} ;

	boyer_moore(vect, vect.size());

	return 0;
}