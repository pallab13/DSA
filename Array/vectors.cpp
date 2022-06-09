#include <iostream>
#include <vector>
using namespace std;


int main(){

	vector <int> vect ;
	int i ;
	for(i = 0 ; i <=10; i++){
		vect.push_back(i);
	}
	// for(i = 0 ; i <=10; i++){
	// 	cout << vect[i];
	// }


	for(auto j = vect.begin(); j!= vect.end();++j ){
		cout<<*j;

	}

	return 0;


}
