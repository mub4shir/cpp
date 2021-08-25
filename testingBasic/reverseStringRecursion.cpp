#include <bits/stdc++.h>
using namespace std;

void stringReverse(char strArray[]);

int main(void)
{
    char strArray[] = "Print this string backwards.";
    cout<<strArray<<"\n";


    stringReverse(strArray);
    putchar('\n');

    return 0;
}

void stringReverse(char strArray[])
{
    if (*strArray != '\0') {
        stringReverse(strArray + 1);
        putchar(*strArray);
    }
}