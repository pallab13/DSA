#include <iostream>
using namespace std;

void tower_of_hanoi(char A, char B, char C,int n){

	if (n == 1){
		cout << "move from " << A << "to" << C << endl;
	}
	else{
		tower_of_hanoi(A,C,B,n-1);
		cout<< "move from " << A << "to" << C << endl;
		tower_of_hanoi(B,A,C,n-1);
	}


}
int main(){

	int n = 4;
	tower_of_hanoi('A','B','C',n);
	return 0;

}