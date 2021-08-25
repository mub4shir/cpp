#include<iostream>
using namespace std;

bool am(int n) {

	int sq = n * n;
	while(n > 0) {

		if(n % 10 != sq % 10)
			return false;
		n /= 10;
		sq /=10;

			
	}
	return true;

}

int main() {
	int n ;
	cin>>n;

	am(n) ? cout<<"Automorphic"
		: cout<<"Not Automorphic";

	return 0;
	}                        