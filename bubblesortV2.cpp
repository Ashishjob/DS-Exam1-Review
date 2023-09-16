void optimizedBubbleSort(int a[], int n) {
  int temp, comp = 0, swaps = 0;
  bool swapped; // Flag to track if any swaps were made during a pass

  for (int pass = 1; pass < n; pass++) { // Outer loop for each pass
    swapped = false; // Initialize the flag for this pass

    for (int i = 0; i < n - pass; i++) { // Inner loop for comparisons in this pass
      comp++; // Increment the comparison count
      if (a[i] > a[i + 1]) { // Compare adjacent elements
        swaps++; // Increment the swap count
        temp = a[i]; // Swap elements
        a[i] = a[i + 1];
        a[i + 1] = temp;
        swapped = true; // Set the flag to true if a swap occurs
      }
    }

    // If no swaps were made during this pass, the array is already sorted, so exit early
    if (!swapped) {
      break;
    }
  }
}
