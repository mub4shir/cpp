#include <cstdio>
 
typedef long long ll;
const int p = 1e9 + 7;
 
int quick_pow(ll b, ll n) {
	int ans = 1;
	while (n) {
		if (n & 1) ans = ans * b % p;
		n >>= 1;
		b = b * b % p;
	}
	return ans;
}
 
int main() {
	int n; scanf("%d", &n);
	printf("%d", quick_pow(2, n));
	return 0;
}