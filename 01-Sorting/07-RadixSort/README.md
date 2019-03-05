<h1 align="center" style="text-align:center;line-height:10pt;font-family:'Helvetica Neue',Helvetica,Arial,sans-serif;">How Radix Sort Works?</h1>

To understand merge sort, we take an unsorted array as the following −

<p align="center">
    <img src="/01-Sorting/img/radix_sort.png" alt="Step 01">
</p>

In the above example:

Step 1: we sort the array on basis of least significant digit (1s place) using counting sort. Notice that 435 is below 835, because 435 occurred below 835 in the original list.

Step 2: we sort the array on basis of next digit (10s place) using counting sort. Notice that here 608 is below 704, because 608 occurred below 704 in the previous list, and similarly for (835, 435) and (751, 453).

Step 3: we sort the array on basis of most significant digit (100s place) using counting sort. Notice that here 435 is below 453, because 435 occurred below 453 in the previous list, and similarly for (608, 690) and (704, 751).

Now we should learn some programming aspects of merge sorting.