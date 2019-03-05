<h1 align="center" style="text-align:center;line-height:10pt;font-family:'Helvetica Neue',Helvetica,Arial,sans-serif;">Sorting Algorithms</h1>

# What is Sorting Algorithm?
> Sorting algorithm is an algorithm that puts elements of a list in a certain order. The most frequently used orders are numerical order and lexicographical order.\
> Efficient sorting is important for optimizing the efficiency of other algorithms which require input data to be in sorted lists.

# List of mostly used Sorting Algorithms

### Basic Sorting Algorithms:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Heap Sort
5. Merge Sort
6. Quick Sort

### Advance Sorting Algorithms:
1. Radix Sort

***Bubble Sort:***
>Bubble sort is a comparison-based algorithm that compares each pair of elements in an array and swaps them if they are out of order until the entire array is sorted. For each element in the list, the algorithm compares every pair of elements.

<img src="/01-Sorting/img/bubble-sort.gif" width="100%" alt="Bubble Sort">

**Pseudocode:**
- a is an array size n

        swapped = true
        while swapped
            swapped = false
            for j from 0 to N - 1
               if a[j] > a[j + 1]
                  swap( a[j], a[j + 1] )
                  swapped = true
    
***Selection Sort:***
>Selection sort is an in-place comparison-based algorithm that divided the list into two parts, the sorted part at the left end and the unsorted part at the right end. Initially, the sorted part is empty and the unsorted part is the entire list.\
The smallest element is selected from the unsorted array and swapped with the leftmost element, and that element becomes a part of the sorted array. This process continues moving unsorted array boundary by one element to the right.

<img src="/01-Sorting/img/selection-sort.gif" width="100%" alt="Selection Sort">

**Pseudocode:**
- lst is an array

       func selsrtI(lst)
        	max = length(lst) - 1
    
       	 for i from 0 to max
            	key = lst[i]
            	keyj = i
    
            	for j from i+1 to max
                	if lst[j] < key
                    		key = lst[j]
                    		keyj = j
    
           	 lst[keyj] = lst[i]
           	 lst[i] = key
    
       	 return lst
       end func


***Insertion Sort:***
>Insertion sort is a comparison-based algorithm that builds a final sorted array one element at a time. It iterates through an input array and removes one element per iteration, finds the place the element belongs in the array, and then places it there.

<img src="/01-Sorting/img/insertion-sort.gif" width="100%" alt="Insertion Sort">

**Pseudocode:**
- a is an array of size N

       for i from 1 to N
       	key = a[i]
      	 j = i - 1
       	while j >= 0 and a[j] > key
          		a[j+1] = a[j]
          		j = j - 1
       	a[j+1] = key


***Heap Sort:***
>Heap sort is a comparison-based algorithm that uses a binary heap data structure to sort elements. It divides its input into a sorted and an unsorted region, and it iteratively shrinks the unsorted region by extracting the largest element and moving that to the sorted region.

<img src="/01-Sorting/img/heap-sort.gif" width="100%" alt="Heap Sort">

**Pseudocode:**

    Heapsort(A as array)
        BuildHeap(A)
        for i = n to 1
            swap(A[1], A[i])
            n = n - 1
            Heapify(A, 1)
    
    BuildHeap(A as array)
        n = elements_in(A)
        for i = floor(n/2) to 1
            Heapify(A,i,n)
    
    Heapify(A as array, i as int, n as int)
        left = 2i
        right = 2i+1
    
        if (left <= n) and (A[left] > A[i])
            max = left
        else 
            max = i
    
        if (right<=n) and (A[right] > A[max])
            max = right
    
        if (max != i)
            swap(A[i], A[max])
            Heapify(A, max)

***Merge Sort:***
>Merge sort is a comparison-based algorithm that focuses on how to merge together two pre-sorted arrays such that the resulting array is also sorted. 

<img src="/01-Sorting/img/merge-sort.gif" width="100%" alt="Merge Sort">

**Pseudocode:**
- a is an array containing n elements

      func mergesort( var a as array )
         if ( n == 1 ) return a
    
         var l1 as array = a[0] ... a[n/2]
         var l2 as array = a[n/2+1] ... a[n]
    
         l1 = mergesort( l1 )
         l2 = mergesort( l2 )
    
         return merge( l1, l2 )
      end func
    
      func merge( var a as array, var b as array )
         var c as array
    
         while ( a and b have elements )
              if ( a[0] > b[0] )
                   add b[0] to the end of c
                   remove b[0] from b
              else
                   add a[0] to the end of c
                   remove a[0] from a
         while ( a has elements )
              add a[0] to the end of c
              remove a[0] from a
         while ( b has elements )
              add b[0] to the end of c
              remove b[0] from b
         return c
       end func

***Quick Sort:***
>Quick sort is a comparison-based algorithm that uses divide-and-conquer to sort an array. The algorithm picks a pivot element, A[q] and then rearranges the array into two subarrays A[p . . . . q-1] , such that all elements are less than A[q] and A[q+1 . . . r] , such that all elements are greater than or equal to A[q].

<img src="/01-Sorting/img/quick-sort.gif" width="100%" alt="Quick Sort">

**Pseudocode:**

    Quicksort(A as array, low as int, high as int){
        if (low < high){
            pivot_location = Partition(A,low,high)
            Quicksort(A,low, pivot_location)
            Quicksort(A, pivot_location + 1, high)
        }
    }
    Partition(A as array, low as int, high as int){
         pivot = A[low]
         leftwall = low
    
         for i = low + 1 to high{
             if (A[i] < pivot) then{
                 swap(A[i], A[leftwall + 1])
                 leftwall = leftwall + 1
             }
         }
         swap(pivot,A[leftwall])
    
        return (leftwall)}

***Radix Sort:***
>Radix Sort is a non-comparative sorting algorithm with asymptotic complexity O(nd). It is one of the most efficient and fastest linear sorting algorithms. Radix sort was developed to sort large integers. As integer is treated as a string of digits so we can also call it as string sorting algorithm.

<img src="/01-Sorting/img/radix-sort.gif" width="100%" alt="Radix Sort">

**Pseudocode:**

    func Radixsort(A, d)
    //It works same as counting sort for d number of passes.
    //Each key in A[1..n] is a d-digit integer.
    //(Digits are numbered 1 to d from right to left.)
        for j = 1 to d do
            //A[]-- Initial Array to Sort
            int count[10] = {0};
            //Store the count of "keys" in count[]
            //key- it is number at digit place j
            for i = 0 to n do
             count[key of(A[i]) in pass j]++
     
            for k = 1 to 10 do
             count[k] = count[k] + count[k-1]
     
            //Build the resulting array by checking
            //new position of A[i] from count[k]
            for i = n-1 downto 0 do
             result[ count[key of(A[i])] ] = A[j]
             count[key of(A[i])]--
     
            //Now main array A[] contains sorted numbers
            //according to current digit place
            for i=0 to n do
              A[i] = result[i]
     
        end for(j)
    end func


<h1 align="center" style="text-align:center;line-height:10pt;font-family:'Helvetica Neue',Helvetica,Arial,sans-serif;">Choosing a Sorting Algorithm</h1>

To choose a sorting algorithm for a particular problem, consider the running time, space complexity, and the expected format of the input list.


| Sorting Algorithm | Best Case | Average Case | Worst Case | Space Complexity | Stable? |
| ------ | ------ | ------ | ------ | ------ | ------ |
| Bubble Sort | Ω(n) | Θ(n^2) | Θ(n^2) | O(1) | Yes |
| Selection Sort | Ω(n^2) | Θ(n^2) | O(n^2) | O(1) | No |
| Insertion Sort | Ω(n) | Θ(n^2) | O(n^2) | O(1) | Yes |
| Heap Sort | Ω(n log(n)) | Θ(n log(n)) | O(n log(n)) | O(1) | No |
| Mergesort | Ω(n log(n)) | Θ(n log(n)) | O(n log(n)) | O(n) | Yes |
| Quicksort | Ω(n log(n)) | Θ(n log(n)) | O(n^2) | O(log(n)) | No |
| Radix Sort | Ω(nk) | Θ(nk) | O(nk) | O(n+k) | Yes |


Here,

O = Big-O

Ω = Big Omega

Θ = Theta

**Big-O (O)** is a measure of the longest amount of time it could possibly take for the algorithm to complete.\
f(n) ≤ cg(n), where f(n) and g(n) are non-negative functions, g(n) is upper bound, then f(n) is Big O of g(n).\
This is denoted as "f(n) = O(g(n))"

**Big Omega (Ω)** describes the best that can happen for a given data size.\
"f(n) ≥ cg(n)", this makes g(n) a lower bound function.\
This is denoted as "f(n) = Ω(g(n))"

**Theta (Θ)** is basically saying that the function, f(n) is bounded both from the top and bottom by the same function, g(n).\
f(n) is theta of g(n) if and only if f(n) = O(g(n)) and f(n) = Ω(g(n))\
This is denoted as "f(n) = Θ(g(n))"

