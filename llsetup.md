<h1>How to setup a Linked List:</h1>

<h2>
1. Set the struct:</h2>
<h4>
To set up the node, first, we must set up a struct:
</h4>

```cpp
struct node {
  int data;      // the data part that holds the general data for the node
  node* next;    // the pointer part that is connecting this node with others
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
    node *head;                              // pointer to the head
  
  public:
    list() { head = nullptr; }               // default constructor
  
    void insertHead(int data);               // insertion at the head
    void insertTail(int data);               // insertion at the end
    void insertPos(int data, int pos);       // insertion at the called position
  
    void removeHead();                       // deletion at the head
    void removeTail();                       // deletion at the end
    void removePos(int pos);                 // deletion at the called position
  
    string printHead();                      // printing the head
    string printTail();                      // printing the tail
    string printPos(int pos);                // printing the called position
  
    int recCount(node* curr);                // recursively counting the nodes in the linked list
    void recPrint(node* curr);               // recursively printing the nodes in the linked list
};
```
