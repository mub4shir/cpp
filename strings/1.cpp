#include <iostream>
#include<string.h>
#include<vector>
using namespace std;
  
void atDemo(string str) {
	cout << str.at(0);
        int ln = str.length();
	cout<<ln-2;

	char last = str.at(ln-1);
	cout<<last; 
}
  
int main() {
        int n;
	cin>>n;
	string  str[n];
	for(int i = 0; i< n; i++){
		cin>>str[i];
	}
	for(int i = 0; i<n; i++) {
		atDemo(str[i]);
		cout<<"\n";
	}
	return 0;
	
}


