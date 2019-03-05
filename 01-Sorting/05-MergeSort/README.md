<h1 align="center" style="text-align:center;line-height:10pt;font-family:'Helvetica Neue',Helvetica,Arial,sans-serif;">How Merge Sort Works?</h1>

To understand merge sort, we take an unsorted array as the following −

<p align="center">
    <img src="/01-Sorting/img/unsorted_array.jpg" alt="Step 01">
</p>

We know that merge sort first divides the whole array iteratively into equal halves unless the atomic values are achieved. We see here that an array of 8 items is divided into two arrays of size 4.

<p align="center">
    <img src="/01-Sorting/img/merge_sort_divide_1.jpg"  alt="Step 02">
</p>

This does not change the sequence of appearance of items in the original. Now we divide these two arrays into halves.

<p align="center">
    <img src="/01-Sorting/img/merge_sort_divide_2.jpg"  alt="Step 03">
</p>

We further divide these arrays and we achieve atomic value which can no more be divided.

<p align="center">
    <img src="/01-Sorting/img/merge_sort_divide_3.jpg"  alt="Step 04">
</p>

Now, we combine them in exactly the same manner as they were broken down. Please note the color codes given to these lists.

We first compare the element for each list and then combine them into another list in a sorted manner. We see that 14 and 33 are in sorted positions. We compare 27 and 10 and in the target list of 2 values we put 10 first, followed by 27. We change the order of 19 and 35 whereas 42 and 44 are placed sequentially.

<p align="center">
    <img src="/01-Sorting/img/merge_sort_combine_1.jpg"  alt="Step 05">
</p>

In the next iteration of the combining phase, we compare lists of two data values, and merge them into a list of found data values placing all in a sorted order.

<p align="center">
    <img src="/01-Sorting/img/merge_sort_combine_2.jpg"  alt="Step 06">
</p>

After the final merging, the list should look like this −

<p align="center">
    <img src="/01-Sorting/img/merge_sort.jpg"  alt="Step 07">
</p>