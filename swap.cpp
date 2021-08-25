#include<bits/stdc++.h>
using namespace std;

void swap(int x, int y){
        
	x = x + y;
	y = x - y;
	x = x - y;
	printf("%d\t%d", x, y);	

	}
int main() {
        
	int x = 10;
	int y = 5;
	swap(x,y);

	}