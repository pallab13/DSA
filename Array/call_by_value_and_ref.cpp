#include <iostream>
using namespace std;


void change(int & temp){
  
	temp = temp +1 ;

}

int main() {

	int first = 12;
	cout << first<<endl;

	change(first);
	cout << first <<endl;

}