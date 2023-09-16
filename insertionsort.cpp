void insertionSort(vector<int>& arr) {
    int n = arr.size(); // Get the size of the vector.
    
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Store the current element in 'key'.
        int j = i - 1; // Initialize 'j' to the index before the current element.

        while (j >= 0 && arr[j] > key) {
            // Compare the current element with elements before it and shift them if needed.

            arr[j + 1] = arr[j]; // Shift the element to the right.
            j--; // Move 'j' one position to the left.
        }
        
        arr[j + 1] = key; // Place the 'key' in its correct position.
    }
}
