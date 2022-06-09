#include <iostream>
using namespace std;

int max (int m, int n){
	if(m>n){
		return m;
	}
	else{
		return n;
	}
}

int min (int m, int n){
	if(m<n){
		return m;
	}
	else{
		return n;
	}
}

int gcd(int m, int n){

	int m_temp,n_temp;
	// m_temp = m;
	// n_temp = ;
	int rem;
	// cout<< m_temp<<endl;
	// cout << n_temp<<endl;

	m_temp = max(m, n);
	n_temp = min(m, n);
	if (m_temp%n_temp == 0){
		return n_temp;
	}
	else{
		rem = m_temp%n_temp;
		m_temp = n_temp;
		n_temp = rem ;
		return gcd(m_temp,n_temp);

	}
}


int main(){

	int m,n;
	m = 15;
	n = 225;

	int gcdval = gcd(m,n);

	cout << gcdval << endl;



}