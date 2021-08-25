#include<bits/stdc++.h>
using namespace std;

void swap(int x, int y){
        
	//x = x + y;
	//y = x - y;
	//x = x - y;
	x = x * y;
	y = x / y;
	x = x / y;
	printf("After swap\nx: %d\ny: %d", x, y);	

	}
int main() {
        
	int x = 7;
	int y = 5;
	printf("Before swap\nx: %d\ny: %d\n", x, y);
	swap(x,y);

	}