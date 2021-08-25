#include<iostream>
using namespace std;
// Function to demonstrate printing pattern
void p(int n) {
	
	//number of spaces
	int k = 2 * n - 2 ;
	
	// Outer loop to handle number of rows
	// n in this case 
	for(int i = 0; i < n; i++){
		
		//Inner loop to handle number of spaces 
		//value changing acc. to requirement 
		for(int j = 0; j < k; j++)
		cout<<" ";
		//Decrementing k after each loop
		k = k - 2;
		
		//Inner loop to handle number of colums 
		//values changing acc. to requirement 
		for(int j = 0; j <= i; j++){
		        //Printing stars
			cout<<"* ";	
			}
			
		// Ending line after each row 
		cout<< endl;
	        	
		}
	

        	

	} 

int main() {

	int n;
	cin>>n;
	p(n);
	return 0;
}                     