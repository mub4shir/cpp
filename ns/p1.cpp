#include<iostream>
using namespace std;

int sumDigits(int num) {
	int sum= 0;
	int temp = 0;
	temp = num; 
	while(num!=0) {
		sum = sum + num % 10;
		num /= 10;
	if(sum == 10)
		return temp;
		continue;
}


}

int main() {
		
	int arr[1000];
	 
	for(int i = 19, j = 0; i <= sizeof(arr)/ sizeof(arr[0]); i++ ) {
		arr[j++]= sumDigits(i);
			
	 
	}

	for(int i = 0; i<=sizeof(arr)/sizeof(arr[0]); i++) {
		cout<<arr[i]<<" ";

	}

}