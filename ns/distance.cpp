
#include <bits/stdc++.h>
using namespace std;
 
// Function to calculate distance
float distance(int x1, int y1, int x2, int y2)
{
    // Calculating distance
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
}
 
// Drivers Code
int main()
{
    cout << fixed << setprecision(0) << distance(3, 4, 7, 7);
    return 0;
}