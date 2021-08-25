#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n){

	int maximum = INT_MIN, sL = INT_MIN, tL = INT_MIN;
 
	for(int i = 0; i < n; i++) {
         	maximum = max(maximum, arr[i]); 
	}

	for(int i = 0; i < n; i++) {
		if(arr[i] != maximum)
		sL = max(sL, arr[i]);
	
	}
	//return sL;
	for(int i = 0; i < n; i++){
		if(arr[i] != sL && arr[i] != maximum)
		tL = max(tL, arr[i]);
		
	}
	return tL;

}
int main(){
	int arr[] = {1, 2, 8, 10, 15, 4, 25};
	int n = sizeof(arr)/ sizeof(arr[0]);
	
	cout<<secondLargest(arr, n)<<" "<<maximum<<" "<<sL;
	



	}



