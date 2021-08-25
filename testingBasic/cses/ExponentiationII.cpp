#include<iostream>
#include<cstring>
#include<cstdio>
#define llong long long
using namespace std;
llong a,b,c,p;
llong powi(llong a,llong b,llong p){
	llong c=1;
	while(b>0){
		if(b%2==1){
			c=c*a%p;
			b--;
		}
		else{
			a=a*a%p;
			b/=2;
		}
	}
	return c;
}
int main(){
	llong p=1000000007;
	int n; scanf("%d",&n);
	while(n--){
		scanf("%I64d%I64d%I64d",&a,&b,&c);
		b=powi(b,c,p-1); 
		printf("%I64d\n",powi(a,b,p));
}
	return 0;
}
