#include <iostream>
using namespace std;

int main() {
    int n,i;
	cout<<"Enter Limit:  " ;
	cin >>n;
	for(i=n; i>=1; i--){
		cout << i << endl;

		if(i%5==0){
			cout<<"Beep"<<endl;
}
	}


	return 0;
}