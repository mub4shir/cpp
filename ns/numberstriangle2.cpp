#include<bits/stdc++.h>
using namespace std;


int main() {
        int n = 5;
	int num = 1;
	int k = n*2 - 2;
	for(int i = 0; i < n; i++){
		//int num = 1;
		for(int j = 0; j < k;  j++){
			cout<<" ";
		}
		for(int j = 0; j<=i; j++){
			cout<<num<<"  ";
			num++;
		}
		
	cout<<endl;
	k = k-1;

	}                                        

	return 0;

	}