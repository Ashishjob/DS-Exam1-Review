<h1>Bubblesort V2 or Optimized Bubblesort</h1>

<h4>Best case time complexity is O(n), but Worst Case time complexity is O(n^2)</h4>

```cpp
void bubbleSortV2(vector<int>& arr) {
    int n = arr.size(); // Get the size of the vector.
    bool swapped; // Flag to track if any swaps were made during a pass.
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false; // Initialize the flag for this pass.

        for (int j = 0; j < n - i - 1; j++) {
            // The inner loop iterates through the unsorted portion of the vector.
            
            if (arr[j] > arr[j + 1]) {
                // Compare adjacent elements and swap them if they are in the wrong order.
                
                swap(arr[j], arr[j + 1]);
                swapped = true; // Set the flag to true if a swap occurs.
            }
        }

        if (!swapped) {
            // If no swaps were made during this pass, the vector is already sorted.
            
            break; // Exit the sorting loop.
        }
    }
}
```
