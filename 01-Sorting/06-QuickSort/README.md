<h1 align="center" style="text-align:center;line-height:10pt;font-family:'Helvetica Neue',Helvetica,Arial,sans-serif;">How Quick Sort Works?</h1>

To understand merge sort, we take an unsorted array as the following −

<p align="center">
    <img src="/01-Sorting/img/quick_sort_1.png" alt="Step 01">
</p>


First of all, a pivot element is selected.

<p align="center">
    <img src="/01-Sorting/img/quick_sort_1.png" alt="Step 02">
</p>

It is swapped with the first element in the partition (to get it out of the way!).

<p align="center">
    <img src="/01-Sorting/img/quick_sort_2.png" alt="Step 03">
</p>

The program searches from the left for an element that belongs to the right of the pivot element, and from the right for an element that belongs to the left.

<p align="center">
    <img src="/01-Sorting/img/quick_sort_3.png" alt="Step 04">
</p>

Whenever it finds any two such elements, it swaps them.

<p align="center">
    <img src="/01-Sorting/img/quick_sort_4.png" alt="Step 05">
</p>

Eventually the search from the left and the search from the right reach the same place. If, at the place where the search stops, the element belongs on the left of the pivot element, it is swapped with it. That's not the case here!

<p align="center">
    <img src="/01-Sorting/img/quick_sort_5.png" alt="Step 06">
</p>

Otherwise, the pivot element is swapped with the element to the left of the spot where the search stopped. Quicksort implementations that skip this step may not terminate.

<p align="center">
    <img src="/01-Sorting/img/quick_sort_6.png" alt="Step 07">
</p>

We recursively call the Quicksort algorithm to sort the smaller of the two subpartitions (in this case, there are two elements on the left of the pivot, and four on the right, so we sort the left and then the right).

<p align="center">
    <img src="/01-Sorting/img/quick_sort_7.png" alt="Step 08">
</p>

And, lastly, we sort the larger partition.

<p align="center">
    <img src="/01-Sorting/img/quick_sort_8.png" alt="Step 09">
</p>

After the final sort, the list should look like this −

<p align="center">
    <img src="/01-Sorting/img/quick_sort_9.jpg"  alt="Step 10">
</p>