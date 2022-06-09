#include <iostream>
using namespace std;

int factorial(int n ){
	int val;
	if (n <= 1){
		return 1;
	}
	else {
		return n*factorial(n-1);
	}

	// return val;
}


int main(){
  	
  	int num = 5;
  	int fact ;
  	fact = factorial(num);

  	cout << fact << endl;



}