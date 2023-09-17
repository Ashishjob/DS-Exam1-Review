<h1>How to setup a Linked List:</h1>

<h2>
1. Set the struct:</h2>
<h4>
To set up the node, first, we must set up a struct:
</h4>

```cpp
struct node {
  int data;                                  // The data part that holds the general data for the node
  node* next;                                // The pointer part that is connecting this node with others
};
```

<h2>
2. Define the class:</h2>
<h4>
Next, we have to create a class for the list with public and private data members, and to address what belongs in them, the private should always hold the pointer to the head, and the public should hold the general functions that you call for the list such as insertions, deletions, counters, or prints:
</h4>

```cpp
class linkedList {
  private:
    node *head;                              // Pointer to the head
  
  public:
    list() { head = nullptr; }               // Default constructor
  
    void insertHead(int data);               // Insertion at the head
    void insertTail(int data);               // Insertion at the end
    void insertPos(int data, int pos);       // Insertion at the called position
  
    void removeHead();                       // Deletion at the head
    void removeTail();                       // Deletion at the end
    void removePos(int pos);                 // Deletion at the called position
  
    string printHead();                      // Printing the head
    string printTail();                      // Printing the tail
    string printPos(int pos);                // Printing the called position
  
    int recCount(node* curr);                // Recursively counting the nodes in the linked list
    void recPrint(node* curr);               // Recursively printing the nodes in the linked list
    bool recSearch(node* curr, int target)   // Recursively searching the nodes in the linked list
};
```

<h2>
3. Implement the functions:</h2>
<h4>
Finally, we have to create all the functions that we declared in our class including, but not limited to: insertions, deletions, prints, and counts.
</h4>

<h3>
  I. Insert at Head:
</h3>

```cpp
void insertHead(int d) {
  node *temp = new node;                     // Create a new node and allocate memory for it.

  temp->data = d;                            // Assign the data 'd' to the 'data' field of the new node.
  temp->next = nullptr;                      // Set the 'next' pointer of the new node to nullptr initially.

  temp->next = head;                         // Make the 'next' pointer of the new node point to the current head of the list.
  head = temp;                               // Update the 'head' pointer to make the new node the new head of the list.
}
```

<div align="center">
  <img src="https://cdn.procoding.org/datastructures/linkedlist/singly-linked-list/singly-linked-list-insert-at-start.gif"></img>
</div>

<h3>
  II. Insert at End:
</h3>

```cpp
void insertTail(int d) {
  node *temp = new node;                     // Create a new node and allocate memory for it.

  temp->data = d;                            // Assign the data 'd' to the 'data' field of the new node.
  temp->next = nullptr;                      // Set the 'next' pointer of the new node to nullptr initially.

  if (head == nullptr) {                     // Check if the linked list is empty (head is nullptr), and if so, 
    head = temp;                             // make the new node the head and return, as it becomes the entire list.
    return;
  }

  node *curr = head;                         // Initialize a pointer 'curr' to traverse the list from the head.
  while (curr->next != nullptr) {            // Traverse the list until reaching the last node (where 'next' is nullptr).
    curr = curr->next;
  }
  curr->next = temp;                         // Make the 'next' pointer of the last node point to the new node.
}
```

<div align="center">
  <img src="https://cdn.procoding.org/datastructures/linkedlist/singly-linked-list/singly-linked-list-insert-at-end.gif"></img>
</div>

<h3>
  III. Insert at Position:
</h3>

```cpp
void insertPos(int d, int p) {
  node *temp = new node;                     // Create a new node and allocate memory for it.
  temp->data = d;
  temp->next = nullptr;

  if (p == 0) {                              // Handle the case where 'p' is 0.
    if (head == nullptr) {                   // If the linked list is empty, make the new node the head.
      head = temp;
    } else {                                 // Otherwise, insert the new node at the beginning of the list.
      temp->next = head;
      head = temp;
    }
    return;
  }

  if (p >= recCount()) {                     // If 'p' is greater than or equal to the number of nodes in the list, do nothing.
    return;
  }

  node *curr = head;                         // Initialize pointers 'curr' and 'prev' to traverse the list.
  node *prev = nullptr;

  for (int i = 0; i < p; i++) {              // Traverse the list to find the position 'p' (0-based).
    if (curr == nullptr) {                   // If 'curr' becomes nullptr before reaching position 'p', do nothing.
      return;
    }
    prev = curr;
    curr = curr->next;
  }

  prev->next = temp;                         // Insert the new node between 'prev' and 'curr'.
  temp->next = curr;
}
```

<div align="center">
  <img src="https://cdn.procoding.org/datastructures/linkedlist/singly-linked-list/singly-linked-list-insert-at-random.gif"></img>
</div>

<h3>
  IV. Delete at Head:
</h3>

```cpp
void removeHead() {
  if (head == nullptr) {                     // Check if the linked list is empty.
    return;                                  // If empty, there's nothing to remove.
  }
  node *temp = head;                         // Create a temporary pointer 'temp' to the current head node.
  head = head->next;                         // Update the 'head' pointer to point to the next node, removing the current head.
  delete temp;                               // Delete the old head node to free up memory.
}
```

<div align="center">
  <img src="https://cdn.procoding.org/datastructures/linkedlist/singly-linked-list/singly-linked-list-delete-at-start.gif"></img>
</div>

<h3>
  V. Delete at End:
</h3>

```cpp
void removeTail() {
  if (head == nullptr) {                     // Check if the linked list is empty.
    return;                                  // If empty, there's nothing to remove.
  } else if (head->next == nullptr) {        // Special case: If there's only one node in the list, remove it.
    node *temp = head;
    head = head->next;
    delete temp;
  } else {
    node *curr = head;                       // Initialize pointers 'curr' and 'prev' to traverse the list.
    node *prev = nullptr;

    while (curr->next != nullptr) {          // Traverse the list to find the last node.
      prev = curr;
      curr = curr->next;
    }

    prev->next = nullptr;                    // Update 'prev' to point to nullptr, effectively removing the last node.
    delete curr;                             // Delete the old last node to free up memory.
  }
}
```

<div align="center">
  <img src="https://cdn.procoding.org/datastructures/linkedlist/singly-linked-list/singly-linked-list-delete-at-end.gif"></img>
</div>

<h3>
  VI. Delete at Position:
</h3>

```cpp
void removePos(int p) {
  if (head == nullptr) {                     // Check if the linked list is empty.
    return;                                  // If empty, there's nothing to remove.
  } else if (p == 0) {                       // Special case: If 'p' is 0, remove the head node.
    node *temp = head;
    head = head->next;
    delete temp;
    return;
  }

  node *curr = head;                         // Initialize pointers 'curr' and 'prev' to traverse the list.
  node *prev = nullptr;

  for (int i = 0; i < p; i++) {              // Traverse the list to find the node at position 'p'.
    if (curr == nullptr) {                   // If 'curr' becomes nullptr before reaching position 'p', do nothing.
      return;
    }
    prev = curr;
    curr = curr->next;
    if (curr == nullptr) {                   // If 'curr' becomes nullptr during traversal, do nothing.
      return;
    }
  }

  prev->next = curr->next;                   // Update 'prev' to point to the node after 'curr', removing 'curr'.
  delete curr;                               // Delete the removed node to free up memory.
}
```

<div align="center">
  <img src="https://cdn.procoding.org/datastructures/linkedlist/singly-linked-list/singly-linked-list-delete-at-random.gif"></img>
</div>

<h3>
  VII. Print at Head:
</h3>

```cpp
int printHead() {
  if (head == nullptr) {                     // Check if the linked list is empty.
    return -1;                               // If empty, return -1.
  }
  
  return head->data;                         // Return the data value of the head node.
}
```

<h3>
  VIII. Print at End:
</h3>

```cpp
int printTail() {
  if (head == nullptr) {                     // Check if the linked list is empty.
    return -1;                               // If empty, return -1.
  }
  
  node *curr = head;                         // Initialize a pointer 'curr' to traverse the list.

  while (curr->next != nullptr) {            // Traverse the list to find the last node.
    curr = curr->next;
  }

  return curr->data;                         // Return the data value of the last node.
}
```

<h3>
  IX. Print at Position:
</h3>

```cpp
int printPos(int p) {
  if (head == nullptr) {                     // Check if the linked list is empty.
    return -1;                               // If empty, return -1.
  } else if (head->next == nullptr) {        // Special case: If there's only one node in the list, return its data.
    return head->data;
  } else if (p >= recCount() || p < 0) {     // Check if 'p' is out of bounds.
    return -1;                               // If 'p' is out of bounds, return -1.
  }
  
  node *curr = head;                         // Initialize a pointer 'curr' to traverse the list.

  for (int i = 0; i < p; i++) {              // Traverse the list to find the node at position 'p'.
    if (curr == nullptr) {                   // If 'curr' becomes nullptr before reaching position 'p', return -1.
      return -1;
    }
    curr = curr->next;
  }

  return curr->data;                         // Return the data value of the node at position 'p'.
}

```

<h3>
  X. Recursive Traversal and Counting:
</h3>

```cpp
int recCount(node *curr) {
  if (curr == nullptr) {                     // Condition to stop if 'curr' is nullptr, since there are no more nodes to count.
    return 0;                                // Return 0 to indicate an empty list.
  }
  
  return recCount(curr->next) + 1;           // The change in parameter to update, what our function is specifically calling for
}
}
```

<h3>
  XI. Recursive Printing:
</h3>

```cpp
void recprint(node *curr) {
  if (curr == nullptr) {                     // Condition for when to stop traversing the linked list
    return;
  }
  cout << "data: " << curr->data << endl;    // The reason behind the need for repetition is to view everything within the list
  return recprint(curr->next);               // The change in parameter to update, what our function is specifically calling for
}
```

<h3>
  XI. Recursive Printing:
</h3>

```cpp
bool recSearch(node* curr, int t) {
    if (curr == nullptr) {                   // Condition to stop if the current node is nullptr, since the target is not found.
        return false;
    }

    if (curr->data == t) {                   // Check if the current node contains the target value.
        return true;
    }

    return recSearch(curr->next, t);         // Recursively search in the remaining part of the list.
}
```
