#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	srand(time(0));

	for(int x = 1; x<= 10; x++) {
	cout<<1 + (rand() % 6)<<endl;
}


}

/*	using current time as a seed value 
 	for srand() function
	use time() function to get number of seconds
	on your system time, and randomly seed the rand() 
	function (we need to include the <ctime> header for it )
	time(0) will return the current second count, prompting the srand()
	function to set a different seed for the rand() function each time the 
	program runs */