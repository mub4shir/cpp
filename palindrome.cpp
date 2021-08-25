#include <iostream>
using namespace std;
int n;
bool isPalindrome(int x) {
    int rev = 0;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;     
        
        }


    if(rev == n){
        return true;
    }else{
        return false;
    }

    
}

int main() {
    int z;
    cin >>n;
    z=isPalindrome(n);
    cout<<z<<endl;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}