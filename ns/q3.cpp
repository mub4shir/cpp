#include<iostream>
using namespace std;

int main() {
	int n, r=0,s=0;
	cin>>n;
	r = 9 + (24 + ((n-1)*16));
	n+=1;
	s = r + (24 + ((n-1)*16));
	cout<<s; 
		
	return 0;
}