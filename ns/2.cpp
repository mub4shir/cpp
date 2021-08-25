#include <iostream>

using namespace std;



int main()

{



    int a = 24, N = 0, b = 0;



    cin >> N;



    for (int i = 1; i <= 10000; i++)

    {



        b = a + (13 * (i - 1));



        if (i == N)

            break;

    }

    cout << b << endl;



    return 0;

}