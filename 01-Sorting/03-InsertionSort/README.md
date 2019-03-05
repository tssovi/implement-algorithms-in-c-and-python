<h1 align="center" style="text-align:center;line-height:10pt;font-family:'Helvetica Neue',Helvetica,Arial,sans-serif;">How Insertion Sort Works?</h1>

We take an unsorted array for our example.
<p align="center">
    <img src="/01-Sorting/img/unsorted_array.jpg" alt="Step 01">
</p>

Insertion sort compares the first two elements.

<p align="center">
    <img src="/01-Sorting/img/insertion_sort_1.jpg"  alt="Step 02">
</p>

It finds that both 14 and 33 are already in ascending order. For now, 14 is in sorted sub-list.

<p align="center">
    <img src="/01-Sorting/img/insertion_sort_2.jpg"  alt="Step 03">
</p>

Insertion sort moves ahead and compares 33 with 27.

<p align="center">
    <img src="/01-Sorting/img/insertion_sort_3.jpg"  alt="Step 04">
</p>

And finds that 33 is not in the correct position.

<p align="center">
    <img src="/01-Sorting/img/insertion_sort_4.jpg"  alt="Step 05">
</p>

It swaps 33 with 27. It also checks with all the elements of sorted sub-list. Here we see that the sorted sub-list has only one element 14, and 27 is greater than 14. Hence, the sorted sub-list remains sorted after swapping.

<p align="center">
    <img src="/01-Sorting/img/insertion_sort_5.jpg"  alt="Step 06">
</p>

By now we have 14 and 27 in the sorted sub-list. Next, it compares 33 with 10.

<p align="center">
    <img src="/01-Sorting/img/insertion_sort_6.jpg"  alt="Step 07">
</p>

These values are not in a sorted order.

<p align="center">
    <img src="/01-Sorting/img/insertion_sort_7.jpg"  alt="Step 08">
</p>

So we swap them.

<p align="center">
    <img src="/01-Sorting/img/insertion_sort_8.jpg"  alt="Step 09">
</p>

However, swapping makes 27 and 10 unsorted.

<p align="center">
    <img src="/01-Sorting/img/insertion_sort_9.jpg"  alt="Step 10">
</p>

Hence, we swap them too.

<p align="center">
    <img src="/01-Sorting/img/insertion_sort_10.jpg"  alt="Step 11">
</p>

Again we find 14 and 10 in an unsorted order.

<p align="center">
    <img src="/01-Sorting/img/insertion_sort_11.jpg"  alt="Step 12">
</p>

We swap them again. By the end of third iteration, we have a sorted sub-list of 4 items.

<p align="center">
    <img src="/01-Sorting/img/insertion_sort_12.jpg"  alt="Step 12">
</p>

This process goes on until all the unsorted values are covered in a sorted sub-list.