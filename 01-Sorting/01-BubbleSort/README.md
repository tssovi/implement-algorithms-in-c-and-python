<h1 align="center" style="text-align:center;line-height:10pt;font-family:'Helvetica Neue',Helvetica,Arial,sans-serif;">How Bubble Sort Works?</h1>

We take an unsorted array for our example. Bubble sort takes Ο(n2) time so we're keeping it short and precise.
<p align="center">
    <img src="/01-Sorting/img/bubble_sort_0.jpg" alt="Step 01">
</p>

Bubble sort starts with very first two elements, comparing them to check which one is greater.

<p align="center">
    <img src="/01-Sorting/img/bubble_sort_1.jpg"  alt="Step 02">
</p>

In this case, value 33 is greater than 14, so it is already in sorted locations. Next, we compare 33 with 27.

<p align="center">
    <img src="/01-Sorting/img/bubble_sort_2.jpg"  alt="Step 03">
</p>

We find that 27 is smaller than 33 and these two values must be swapped.

<p align="center">
    <img src="/01-Sorting/img/bubble_sort_3.jpg"  alt="Step 04">
</p>

The new array should look like this −

<p align="center">
    <img src="/01-Sorting/img/bubble_sort_4.jpg"  alt="Step 05">
</p>

Next we compare 33 and 35. We find that both are in already sorted positions.

<p align="center">
    <img src="/01-Sorting/img/bubble_sort_5.jpg"  alt="Step 06">
</p>

Then we move to the next two values, 35 and 10.

<p align="center">
    <img src="/01-Sorting/img/bubble_sort_6.jpg"  alt="Step 07">
</p>

We know then that 10 is smaller 35. Hence they are not sorted.

<p align="center">
    <img src="/01-Sorting/img/bubble_sort_7.jpg"  alt="Step 08">
</p>

We swap these values. We find that we have reached the end of the array. After one iteration, the array should look like this −

<p align="center">
    <img src="/01-Sorting/img/bubble_sort_8.jpg"  alt="Step 09">
</p>

To be precise, we are now showing how an array should look like after each iteration. After the second iteration, it should look like this −

<p align="center">
    <img src="/01-Sorting/img/bubble_sort_9.jpg"  alt="Step 10">
</p>

Notice that after each iteration, at least one value moves at the end.

<p align="center">
    <img src="/01-Sorting/img/bubble_sort_10.jpg"  alt="Step 11">
</p>

And when there's no swap required, bubble sorts learns that an array is completely sorted.

<p align="center">
    <img src="/01-Sorting/img/bubble_sort_11.jpg"  alt="Step 12">
</p>