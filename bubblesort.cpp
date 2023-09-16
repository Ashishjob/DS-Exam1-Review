#include <iostream>
#include <algorithm>

using namespace std;

void bubbleSort(int a[], int n) {
  int temp, comp, swaps;
  for (int pass = 1; pass < n; pass++) { // outer loop has n iterations
    for (int i = 0; i < n - pass;
         i++) { // inner keeps iterating until n - pass = 0
      comp++;
      if (a[i] > a[i + 1]) {
        swaps++;
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
      }
    }
  }
}
