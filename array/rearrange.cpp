#include<iostream>
using namespace std;

void arrayRe(int arr[], int n) {
	int maximum = arr[0];
	int minimum = arr[0];
	for(int i = 0; i < n; i++){
		if(minimum > arr[i])
			minimum = arr[i];
	}
		
	for(int i = 0; i < n; i++ ){
		 if(arr[i] > maximum)
			maximum = arr[i];
	}
	cout<<minimum<<" ";
        cout<<maximum;
}

int main() {
	int arr[] = {1, 9, 2, 8, 3, 7, 4, 6, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	arrayRe(arr,n);



	}