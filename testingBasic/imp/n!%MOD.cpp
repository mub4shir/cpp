#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long


int main() {
	IOS;
	ll N;
	ll MOD =1000000007;
	cin>>N;
	ll answer=1;
	for(ll i =1; i<=N; i++)
		answer=((answer%MOD)*(i%MOD))%MOD;
	
	cout<<answer%MOD ;

}

