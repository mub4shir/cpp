#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
	vector<bool> isPrime(n+1,true);
	for(int i=2;i*i<=n;i++) if(isPrime[i])
		for(int d=i*i;d<=n;d+=i) isPrime[d]=false;
	for(int i=2;i<=n;i++) if(isPrime[i]) cout<<i<<" "; 
	}

void solve(){
        sieve(77);
	}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();

	}






