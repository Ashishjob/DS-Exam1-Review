void selectionSort(vector<int>& arr) {
    int n = arr.size(); // Get the size of the vector.
    
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume the current index has the minimum value.
        
        for (int j = i + 1; j < n; j++) {
            // Find the index of the minimum element in the unsorted portion of the vector.
            
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update 'minIndex' if a smaller element is found.
            }
        }
        
        if (minIndex != i) {
            // If 'minIndex' is not the same as 'i', swap the elements.
            
            swap(arr[i], arr[minIndex]);
        }
    }
}
