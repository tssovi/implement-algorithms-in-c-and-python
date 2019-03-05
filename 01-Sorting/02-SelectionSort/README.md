<h1 align="center" style="text-align:center;line-height:10pt;font-family:'Helvetica Neue',Helvetica,Arial,sans-serif;">How Selection Sort Works?</h1>

Consider the following depicted array as an example.
<p align="center">
    <img src="/01-Sorting/img/unsorted_array.jpg" alt="Step 01">
</p>

For the first position in the sorted list, the whole list is scanned sequentially. The first position where 14 is stored presently, we search the whole list and find that 10 is the lowest value.

<p align="center">
    <img src="/01-Sorting/img/selection_sort_1.jpg"  alt="Step 02">
</p>

So we replace 14 with 10. After one iteration 10, which happens to be the minimum value in the list, appears in the first position of the sorted list.

<p align="center">
    <img src="/01-Sorting/img/selection_sort_2.jpg"  alt="Step 03">
</p>

For the second position, where 33 is residing, we start scanning the rest of the list in a linear manner.

<p align="center">
    <img src="/01-Sorting/img/selection_sort_3.jpg"  alt="Step 04">
</p>

We find that 14 is the second lowest value in the list and it should appear at the second place. We swap these values.

<p align="center">
    <img src="/01-Sorting/img/selection_sort_4.jpg"  alt="Step 05">
</p>

After two iterations, two least values are positioned at the beginning in a sorted manner.

<p align="center">
    <img src="/01-Sorting/img/selection_sort_5.jpg"  alt="Step 06">
</p>

The same process is applied to the rest of the items in the array.

Following is a pictorial depiction of the entire sorting process −

<p align="center">
    <img src="/01-Sorting/img/selection_sort.jpg"  alt="Step 07">
</p>