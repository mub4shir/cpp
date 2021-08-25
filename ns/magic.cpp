#include<iostream>
using namespace std;

bool checkNumber(int num, int x) {
 
	while(num != 0) {
		if(num % 10 == x)
			return true;
		num /= 10;
		}
	return false;

}

int main() {

        int n;
	cin>>n;
	if(checkNumber(n, 9) && checkNumber(n, 7))
		cout<<n<<" is magic number";
	else
		cout<<n<<" is not magic number";



	}















