#include<iostream>
using namespace std;

int main() {

	int n = 6, a = 0;
	cout<<"The pattern for height 6:-"<<endl;
	//cin>>n;
	for(int i = 1; i <= n; i++ ){
		for(int j = 1; j <= n; j++ ) {
			cout<<(a + ((j -1)*4))<<" "; 



		}
	a += n; 
	cout<<endl;
	


		}
}