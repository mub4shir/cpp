#include <stdio.h>
#include <cmath>

void update(int *c,int *d) {
    *c = *c + *d;
    
    *d = *c - *d - *d;
    *d = abs(*d);
    
    
       
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}