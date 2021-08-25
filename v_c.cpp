#include<iostream>
#include<string>
using namespace std;


int main() {


	string s = "javascriptloops";

	// print vowels 
	for(int i = 0; i <s.length(); i++) {
		if(s[i] == 'a' || s[i]== 'e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u'){
			cout<<s[i]<<endl;
		
	}	

}       // print consonants         
	for(int i = 0; i <s.length(); i++) {
		if(s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i] != 'o' || s[i] != 'u'){
			cout<<s[i]<<endl;	
	}/* else{
		cout<<s[i]<<endl;
} */
}
                  

return 0;	

}