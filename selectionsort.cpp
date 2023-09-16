#include <iostream>
#include <algorithm>

using namespace std;

void selectionSort(int a[], int n) {
  int swaps = 0; // Initialize the swap count.
  int first = a[0]; // Initialize the first element (not used in the sorting process).
  int min = a[0]; // Initialize the minimum element.

  for (int i = 0; i < n; i++) {
    // The outer loop iterates through the elements of the array.

    if (a[i] <= min) {
      // Check if the current element is less than or equal to the current minimum.

      swap(min, a[i]);
      // Swap the current minimum with the current element if a smaller element is found.
      
      min = a[i];
      // Update the minimum to the newly found minimum.
      
      swaps++;
      // Increment the swap count to keep track of the number of swaps made.
    }
  }
}
