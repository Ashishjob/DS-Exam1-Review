<h6>P.S. Time Complexities in order of runtime efficiency [best -> worst]</h6>

<h1> O(1) : Constant Time </h1>
  <h4>
  O(1) is considered the most efficient time complexity and represents what is known as a constant time complexity since it is not dependent on the size of the input. This complexity is usually accomplished when a fixed number of operations, such as accessing an element in an array or performing a simple arithmetic operation are performed.
<h2>Examples:  </h2>
<h4>1. Array Indexing:</h4>

```cpp
int main() {
  int myArray[] = {1, 2, 3, 4, 5};
  int element = myArray[2];  // Accessing the element at index 2
  cout << "Element: " << element << endl;
  return 0;
}
```

<h4>2. Basic Mathematical Operations:</h4>

```cpp
int main() {
  int result 
    
  result = 5 + 3;  // Addition (O(1))
  cout << "Addition Result: " << result << endl;
    
  result = 7 - 2;      // Subtraction (O(1))
  cout << "Subtraction Result: " << result << endl;

  result = 4 * 6;      // Multiplication (O(1))
  cout << "Multiplication Result: " << result << endl;

  result = 10 / 2;     // Division (O(1))
  cout << "Division Result: " << result << endl;
    
  return 0;
}
```

  <h4>3. Retrieving Head from Linked List:</h4>

  ```cpp
  struct ListNode {
    int value;
    ListNode* next;
    ListNode(int val) : value(val), next(nullptr) {}
  };

  int main() {
    // Creating a linked list
    ListNode* head = new ListNode(1);
    ListNode* second_node = new ListNode(2);
    head->next = second_node;

    // Retrieving the first element
    int first_element = head->value;  // O(1)
    cout << "First Element: " << first_element << endl;
    
    return 0;
}
```

  <h4>4. Constructors:</h4>

  ```cpp
  constructor() {
    head = nullptr;
  }
```

  <h4>5. Setters/Getters:</h4>

  ```cpp
  void setData(int value) {
    data = value;
  }

  int getData() const {
    return data;
  }
```

  <h4>6. Checking if Linked List is Empty:</h4>

  ```cpp
  bool isEmpty() {
    if (head == nullptr) {
      return true;
    } else {
      return false;
    }
  }
```
---

<h1> O(logn) : Logarithmic Time </h1>
  <h4>
  O(logn) is considered a highly efficient time complexity and indicates that the algorithm's running time increases logarithmically with the size of the input data (n) meaning that it scales well with increasing sizes in datasets <br></br>
<h2>Examples:  </h2>
<h4>1. Binary Search:</h4>
    
```cpp
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1; // Not found
}
```
<h4>2. Halving Traversal:</h4>

```cpp
void logarithmicTimeComplexity(int n) {
    for (int i = n; i > 0; i /= 2) {
        cout << i << " ";
    }
    cout << endl;
}
```

<h4>3. Doubling Traversal:</h4>

```cpp
void logarithmicTimeComplexity(int n) {
    for (int i = 1; i <= n; i *= 2) {
        cout << i << " ";
    }
    cout << endl;
}
```
---

<h1> O(n) : Linear Time </h1>
  <h4>
  O(n) is still considered an efficient time complexity that linearly scales along with the size of the input values <br></br>
<h2>Examples:  </h2>
<h4>1. Linked List Insert Traversal:</h4>
    
```cpp
void insertAtPos(int pos, string v, int length) {
  node *insertedNode = new node;
  insertedNode->value = v;
  insertedNode->next = nullptr;

  if (pos == 0) {
    if (head == nullptr) {
      head = insertedNode;
    } else {
      insertedNode->next = head;
      head = insertedNode;
    }
    length++;
    return;
  }
  if (pos >= getLength()) {
    return;
  }

  node *curr = head;
  node *prev = nullptr;

  for (int i = 0; i < pos; i++) {
    if (curr == nullptr) {
      return;
    }
    prev = curr;
    curr = curr->next;
  }
  prev->next = insertedNode;
  insertedNode->next = curr;
  length++;
}
```
<h4>2. Linear Search:</h4>

```cpp
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}
```

<h4>3. Array Calculations:</h4>

```cpp
int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
```

<h4>4. Bubblesort V2:</h4>

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
---

<h1> O(nlogn) : Quasilinear Time </h1>
  <h4>
  O(nlogn) is a time complexity that essentially falls right in between O(n) and O(n^2), as input size increases the runtime grows faster than linear but significantly slower than quadratic <br></br>
<h2>Examples:  </h2>
<h4>1. Nested Loop:</h4>
    
```cpp
void nlogn(int n, int m) {
  for (int i = 1; i < n; i *= 2) {    // O(logn) time
    for (int j = 0; j < m; j++) {     // O(n) time
      continue;                       // logn * n = nlogn
    }
  }
}
```
<h4>2. Merge Sort:<h6>We haven't covered this yet, so don't worry about this for the exam</h6></h4>

```cpp
vector<int> mergeSortedArrays(vector<int>& arr1, vector<int>& arr2) {
    vector<int> merged;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    // Append remaining elements from both arrays
    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}
```
---

<h1> O(n^2) : Quadratic Time </h1>
  <h4>
  O(n^2) is when it starts to get a bit inefficient, but not too bad. The runtime has a quadratic relation to the input data and is generally seen with nested loops, since it would be O(n) * O(n). <br></br>
<h2>Examples:  </h2>
<h4>1. Bubble Sort:</h4>
    
```cpp
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
  cout << "Bubble Sort: " << endl;
  cout << "# of Comparisons: " << comp <<endl;
  cout << "# of Swaps: " << swaps << endl;
}
```
<h4>2. Selection Sort:</h4>

```cpp
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the minimum element with the current element
        swap(arr[i], arr[minIndex]);
    }
}
```

<h4>3. 2D Array Manipulation:</h4>

```cpp
void printArray(int arr[][COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
```
---

<h1> O(2^n) : Exponential Time </h1>
  <h4>
  O(2^n) is quite inefficient. The runtime increases exponentially as the input size increases, and these are often seen with recursive functions. <br></br>
<h2>Examples:  </h2>
<h4>1. Recursive Fibonacci Sequence:</h4>
    
```cpp
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
```
---
