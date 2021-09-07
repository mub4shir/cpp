#include <bits/stdc++.h> // header file includes every Standard library
#include <vector>
using namespace std;

int main() {
     vector<vector<int>> v;
     vector<vector<int>> a;
    int mod=1e9+7;
    int n, u;   cin >> n >> u;;
    for(int i = 1; i <= n; i++)
        v[i].resize(n/i+2, 0);
    for(int i = 1; i <= u; i++){
        int l, r, k, p;
        cin >> l >> r >> k >> p;
        int x = r/k;
        int y = ((l-1)/k + 1);
        if(y <= x){
            v[k][y] += p;
            v[k][x+1] += mod - p;
            v[k][y] %= mod;
            v[k][x+1] %= mod;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n/i; j++){
            v[i][j] += v[i][j-1];
            v[i][j] %= mod;
            a[i*j] += v[i][j];
            a[i*j] %= mod;
        }
        cout << a[i] << " ";
    }
	
    
    return 0;
}