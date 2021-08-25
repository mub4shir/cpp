#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n, sum=0, powerTerm=0, nextTerm=0, lastTerm=0;
	cin>>n;

	for(int i=1; i<=n; i++) {
		powerTerm += pow((i+1), 2);
		nextTerm += ((3*i)+1);
		lastTerm += i;

	} 
		sum = powerTerm - nextTerm + lastTerm;
		cout<<sum;

}


