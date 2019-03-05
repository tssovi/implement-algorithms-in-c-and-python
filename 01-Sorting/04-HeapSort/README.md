<h1 align="center" style="text-align:center;line-height:10pt;font-family:'Helvetica Neue',Helvetica,Arial,sans-serif;">How Heap Sort Works?</h1>

To understand heap sort, we take an unsorted array as the following −

<p align="center">
    <img src="/01-Sorting/img/heap_sort.png" width="100%" alt="Step 01">
</p>

Heap sort algorithm is divided into two basic parts -

 - A heap is built out of the data. The heap is often placed in an array with the layout of a complete binary tree.

 - Once heap is built, the first element of the Heap is either largest or smallest, so put the first element of the heap in an array.

 - The complete binary tree maps the binary tree structure into the array indices; each array index represents a node; the index of the node's parent, left child branch, or right child branch is simple expressions. [Example - For a zero-based array, the root node is stored at index 0; if i is the index of the current node, then parent(i) = floor((i-1) / 2) where floor functions map a real number to the smallest leading integer. leftChild(i) = 2*i + 1, rightChild(i) = 2*i + 2]

 - Then a sorted array is created by repeatedly removing the largest element from the heap (the root of the heap), and inserting it into the array.

 - Again make heap using the remaining elements, to pick again the first element of the heap and put it into the array.

 - Keep on doing the same repeatedly until you have the complete sorted list in your array.

 - The heap is updated after each removal to maintain the heap property.

 - Once all objects have been removed from the heap, the result is a sorted array.