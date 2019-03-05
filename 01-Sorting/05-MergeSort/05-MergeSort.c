#include<stdio.h>
#include<time.h> 

#define ARRAY_LEN(x) (sizeof(x) / sizeof((x)[0]))

#define SWAP(a, b) ((&(a) == &(b)) ? (a) : ((a)^=(b),(b)^=(a),(a)^=(b)))

// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void Merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void MergeSort(int arr[], int l, int r) 
{
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        MergeSort(arr, l, m); 
        MergeSort(arr, m+1, r); 
  
        Merge(arr, l, m, r); 
    } 
}

void PrintArray(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
       printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    clock_t start_time, end_time;
    start_time = clock();

    int num_arr[] = {58, 24, 84, 2, 30, 27, 35, 91, 14, 23, 53, 33, 99, 17, 86};
    int len;

    len = ARRAY_LEN(num_arr);
    printf("Random Array: ");
    PrintArray(num_arr, len);
    printf("Performing Merge Sort on Given Array.\n");
    MergeSort(num_arr, 0, len-1);
    printf("Sorted Array: ");
    PrintArray(num_arr, len);

    end_time = clock();

    double execution_time = (double)(end_time - start_time)* 1000.0 / CLOCKS_PER_SEC;
    printf("Code Execution Time: %f Milliseconds\n",  execution_time);
    
    return 0;
}