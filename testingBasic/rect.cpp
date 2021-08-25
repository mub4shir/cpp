#include<iostream>
using namespace std;

int main(){

	int n=10;
	cout<<"\n";
	for(int i=0; i<n/2;i++) {
		for(int j=0;j<n/2;j++)
			cout<<" ";
		for(int j=0; j<n*3; j++)
			cout<<"* ";
		
		cout<<"\n";
	}
return 0;

}