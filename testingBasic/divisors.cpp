#include<bits/stdc++.h>
using namespace std;

long numberOfDivisors(int n){
	long divisors=0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			divisors++;
		
	
	return divisors;
}
	
int main() {
	int n;
	cin>>n;
	cout<<numberOfDivisors(n);
	return 0;

	

}