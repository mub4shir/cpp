#include<cstdio>
#define ll long long
ll ack(int m, int n){
	ll ans ;
	if(m==0) ans=n+1;
	else if(n==0) ans=ack(m-1,1);
	else ans=ack(m-1,ack(m,n-1));
	return ans;
}

int main(){
	for(int i=0;i<6;i++)
	for(int j=0;j<6;j++)
	printf("ackerman %d %d is: %I64d\n",i,j,ack(i,j));

return 0;
}