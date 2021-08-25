#include<iostream>
#include<algorithm>
using namespace std;
int getSum(int a[],int k,int n){
	int start=0;
	int sum=0;
	int maxSum=0;
	for(int end=0; end<n;end++){
		sum+=a[end];
		if(end>=k-1){
			maxSum=max(sum,maxSum);
			sum-=a[start];
			start++;
		
		}
	}
	return maxSum;
	
}

int main(){
	int k=3;
	int a[]={2,1,5,1,3,2};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<getSum(a,k,n);
	return 0;
}