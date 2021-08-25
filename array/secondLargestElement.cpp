#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n){

	int maximum = INT_MIN, sL = INT_MIN, tL = INT_MIN;
	//cout<<sL;
	
 
	for(int i = 0; i < n; i++) {
         	maximum = max(abs(maximum), abs(arr[i]));
	}
		cout<<maximum<<" "; 
	

	for(int i = 0; i < n; i++) {
		if(abs(arr[i]) != abs(maximum))
		sL = max(abs(sL), abs(arr[i]));
	}
		cout<<sL<<" " ;
	

	//return sL;
	for(int i = 0; i < n; i++){
		if(abs(arr[i]) != abs(sL) && abs(arr[i]) != abs(maximum))
		tL = max(abs(tL), abs(arr[i]));
		
	}
	cout<<maximum*sL*tL<<"\n";
	return tL;

}
int main(){
	int arr[] = {-100,-98,-1,2,3,4};
	int n = sizeof(arr)/ sizeof(arr[0]);
	cout<<secondLargest(arr, n)<<endl;




	}



