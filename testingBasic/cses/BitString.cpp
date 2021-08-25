#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

long modPow(long base, long exp, long mod) {
         long x = 1;
         while (exp > 0) {
             if (exp % 2 == 1)
                 x = (x * base) % mod;
             base = (base * base) % mod;
             exp = exp / 2;
         }
         return x;
}

int main(){
	IOS;
	long mod = 1000000007;
	long base = 2;
	long exp;cin>>exp;
	cout<<modPow(base,exp,mod);
	
	return 0;
}