#include <iostream>
#include <string>

using namespace std;

void nearest_num(string number){

	int length = number.length();
	char last = number[length-1];
	int last_as_num = last - '0';
	int number_in_int = stoi(number);;

	if (last_as_num> 5){
		number_in_int += (10- last_as_num);
		number = to_string(number_in_int);
	}
	else if(last_as_num< 5){
		number[length-1] = '0';
	}

	cout << stoi(number) <<endl;
}

int main(){
	string number;
	number = "127";
	nearest_num(number);

}