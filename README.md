<div align="center">
  <h1>DS-Exam1-Review</h1>
</div>

---

<div align="center">
  <img src="https://github.com/Ashishjob/DS-Exam1-Review/assets/114624617/99e248bc-efaf-4401-b403-f5cdbc3e1d42" style="pointer-events: none;">
</div>

---

<h1>Linked Lists:</h1>

---

<h1>Recursion:</h1>

---

<h1>Sorting:</h1>
<h3>Sorting is a fundamental operation in computer science and programming that involves arranging elements in a specific order, such as ascending or descending, with the commonly used algorithms below:</h3>
<h3>
  
  1. Bubblesort: a simple sorting algorithm that repeatedly steps through a list or array, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted. <a href=""> The code behind it</a>

  2. Bubblesort V2: a variation of the basic Bubble Sort that includes an optimization to reduce the number of unnecessary comparisons. <a href=""> The code behind it</a>

<div align="center" >
  <img width="600" align="center" src="https://miro.medium.com/v2/resize:fit:1400/1*GUkhhrPDfgdvvwVFo-il1g.gif"></img>
</div>
<br></br>

  3. Selection Sort: an algorithm repeatedly selects the minimum (or maximum) element from the unsorted part of the array and moves it to the sorted part. <a href=""> The code behind it</a>

<div align="center" >
  <img width="600" align="center" src="https://miro.medium.com/v2/resize:fit:1400/0*KsWSAHHomsr3_BkW.gif"></img>
</div>
<br></br>

  4. Insertion Sort: a sorting algorithm that builds the sorted array one item at a time, placing each element in its correct position within the sorted portion of the array. <a href=""> The code behind it</a>

<div align="center" >
  <img width="600" align="center" src="https://miro.medium.com/v2/resize:fit:1400/0*AWK-9HrqkRGVcRun.gif"></img>
</div>
  
</h3>
<h3 align="center">Tracing: in the context of sorting, tracing refers to the process of meticulously documenting or visualizing the step-by-step execution of a sorting algorithm on a given input. It involves tracking how elements in the data structure (e.g., an array or a list) are compared, swapped, or moved during the sorting process.</h3>

---

<h1>Arrays:</h1>
<h3>There are 2 types of arrays: static and dynamic.
  <br></br>
  Static arrays are arrays that have their memory allocated on the stack, are fixed, and have a predetermined size that cannot be changed from compile time.
  <h6>Pros: They are simple to declare and use and the indices can be read quickly and easily.
  
  Cons: Fixed and unflexible sizes that are not versatile.</h6>
</h3>

```cpp
int myStaticArray[5]; // Declare a static array of integers with size 5
```
  <h3>Dynamic arrays, on the other hand, have their memory allocated on the heap, are flexible, and can take insertions or deletions at any time throughout the runtime.
  <h6>Pros: They are flexible and versatile when it comes to allocating size.
  
  Cons: Complexity in memory management and can lead to issues such as memory leaks.</h6>
  </h3>

  ```cpp
int* myDynamicArray = new int[5]; // Declare and allocate a dynamic array of integers with size 5
```
---


  <h1>Time Complexity (Big O):</h1>
    <h3>Big O or "Order of Growth" describes the upper bound of the time complexity of an algorithm. It is a way to express how an algorithm's running time or space requirements grow as the size of the input data increases.
    <h3>Some examples include: O(1), O(logn), O(n), O(nlogn), O(n^2), O(2^n), and O(n!)<a href="https://github.com/Ashishjob/DS-Exam1-Review/blob/main/Big%20O%20Notation.md"> more details on these here </a></h3>
    <h4 align="center">
      Best Case Situations: the minimum or "ideal" amount of time an algorithm takes to complete its task.<br></br>
      Worst Case Situations: the maximum or "worst" amount of time an algorithm takes to complete its task.<br></br>
    </h4>
    </h3>
    <div align="center">
    <img width="750" src="https://github.com/Ashishjob/DS-Exam1-Review/assets/114624617/84ec81ed-2e4e-4b41-99a6-5c3fbbb44698" style="pointer-events: none"><br></br>
    <a href="https://www.mygreatlearning.com/blog/why-is-time-complexity-essential/"> More resources </a>
  </div>
  
  ---
