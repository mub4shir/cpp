#include<cstdio>

int getPairCount(int arr[],int n,int sum){
	int count=0;
	for(int i=0;i<n;i++)
		for(int j=1+i;j<n;j++)
			if(arr[i]+arr[j]==sum)
				count++;
	return count;
	}
	
int main(){
	int n;printf("enter size of array: ");scanf("%d",&n); 
	int sum;printf("enter target sum: ");scanf("%d",&sum);
	int arr[n];
	n=sizeof(arr)/sizeof(arr[0]);printf("enter %d elements: ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("%d",getPairCount(arr,n,sum)); 

return 0;
}