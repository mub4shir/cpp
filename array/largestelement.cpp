#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n){
		
	int max = arr[0];
	for(int i = 1; i<n; i++) {
		if(arr[i] > max)
			max =arr[i];
			
	}
	return max;

	}

int main(){

	int arr[] = {1,2,8,10,15,4,25};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<largest(arr,n);
	


	}