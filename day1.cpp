#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int x;
    double y;
    string str;
    cin>>x;
    cin>>y;
    getline(cin >> ws, str);
    cout<<i+x<<endl;
    cout << fixed << setprecision(1)<< d + y << endl; 
    cout<<s<<str<<endl; 

    return 0;
}