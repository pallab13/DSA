#include <iostream>
using namespace std;

void pointer_func(int *temp){

	(*temp)++;


}

int main(){
	int var = 10;
	int *ptr ;
	ptr = &var ;
	pointer_func(ptr);
	cout<< *ptr<<endl;
	return 0;

}