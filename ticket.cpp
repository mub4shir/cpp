#include <iostream>
using namespace std;

int main() {
    int ages[5];

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    int t=ages[0],j;
    for(int j = 0; j < 5; j++){
        if(t > ages[j]){
            t=ages[j];

        }


        }
    float f= - (((50.0 * t) / 100.0) - 50.0);
    printf("%.1f",f);
    
    
    return 0;
}
