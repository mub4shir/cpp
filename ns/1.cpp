#include<iostream>
using namespace std;

int main() {

	int a[5]; 
	for(int i = 0; i<5; i++){
		cin>>a[i];
		
	}
	int d = a[1] - a[0];
	cout<<d;
	cout<<"the nth number of given series is: "<<endl;
	int n = sizeof(a) / sizeof(a[0]);
	cout<<sizeof(a)<<endl;
	cout<<sizeof(a[0])<<endl;
	int f = a[0];
	int l = a[n-1];
	//cout<<"the nth number of series is:"<<l+d;
	int t =l+d;
	
	for(int j = 0; t<=10000; j++) {
	        cout<<t<<endl;
		t= t + d; 
		
	  	
		


}
  


}