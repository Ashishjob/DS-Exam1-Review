#include <iostream>
#include <algorithm>

using namespace std;

void selectionSort(int a[], int n) {
  int swaps;
  int first = a[0];
  int min = a[1];
  for (int i = 0; i < n; i++) {
    if (a[i] <= min) {
      swap(min, a[i]);
      min = a[i];
      swaps++;
    }
  }
}
