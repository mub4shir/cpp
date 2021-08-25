#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    double P, R, Tm ;
    cin>> P >> R >> Tm;
 
    /* Calculate compound interest */
    double CI = P * (pow((1 + (R / 100)), Tm));
 
    cout << fixed << setprecision(2) << CI;
 
    return 0;
}