<h1>Bubblesort</h1>

<h4>Best and Worst Case time complexity are both O(n^2)</h4>

```cpp
void bubbleSort(int a[], int n) {
  int temp, comp = 0, swaps = 0; // Initialize temporary variables, comparison count, and swap count.
  
  for (int pass = 1; pass < n; pass++) {
    // The outer loop controls the number of passes through the array.
    // In each pass, the largest unsorted element 'bubbles up' to its correct position at the end of the array.

    for (int i = 0; i < n - pass; i++) {
      // The inner loop iterates through the unsorted portion of the array.
      // It compares adjacent elements and swaps them if they are in the wrong order.

      comp++; // Increment the comparison count for each comparison made.

      if (a[i] > a[i + 1]) {
        // If the current element is greater than the next element, a swap is needed.

        swaps++; // Increment the swap count for each swap made.

        temp = a[i]; // Store the current element in a temporary variable.
        a[i] = a[i + 1]; // Swap the current element with the next element.
        a[i + 1] = temp; // Place the larger element in the next position.
      }
    }
  }
}
```
