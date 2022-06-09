#include <iostream>
#include <string>
using namespace std;


class Pallab {
public:
	int height;
	string Interest ;
};

int main() {
	Pallab pallabda;
	pallabda.height = 181 ;
	pallabda.Interest = "coding";

	cout << pallabda.height<<endl;
	cout<< pallabda.Interest<<endl;
	return 0 ;
}