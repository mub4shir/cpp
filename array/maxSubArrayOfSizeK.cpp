#include<iostream>
#include<algorithm>
using namespace std;

int bruteForce(int a[],int n,int k){
	int maxSum =0;
	for(int i=0;i<n-k;i++){
		int sum=0;
		for(int j=i;j<i+k;j++)
			sum +=a[j];
	maxSum= max(sum,maxSum);
	}

	return maxSum;	
}

int main(){
	int k=3;
	int a[]={2,1,5,1,3,2};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<bruteForce(a,n,k);


return 0;
}