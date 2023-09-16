void bubblesortv2(int a[], int n) {
  int temp, comp = 0, swaps = 0;
  bool swapped;

  for (int pass = 1; pass < n; pass++) {
    swapped = false; // Initialize the flag for this pass

    for (int i = 0; i < n - pass; i++) {
      comp++;
      if (a[i] > a[i + 1]) {
        swaps++;
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
        swapped = true; // Set the flag to true if a swap occurs
      }
    }

    // If no swaps were made during this pass, the array is already sorted
    if (!swapped) {
      break;
    }
  }
}
