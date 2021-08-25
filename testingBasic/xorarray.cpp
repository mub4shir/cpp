#include <bits/stdc++.h>
using namespace std;

int main() {
      int arry[] = {0, 1, 2, 3, 4, 5};
      int* s = arry;
      int* e = arry + (sizeof(arry) / sizeof(arry[0])) - 1;
      while (s < e) {
        *e ^= *s;
        *s ^= *e;
        *e ^= *s;
        s++;
        e--;
      }
      for (size_t i = 0; i < (sizeof(arry) / sizeof(arry[0])); i++) {
        fprintf(stderr, "%d, ", arry[i]);
      }
      fprintf(stderr, "\n");
   }