#include<stdio.h>
#include<time.h> 

#define ARRAY_LEN(x) (sizeof(x) / sizeof((x)[0]))

#define SWAP(a, b) ((&(a) == &(b)) ? (a) : ((a)^=(b),(b)^=(a),(a)^=(b)))

/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
int Partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            SWAP(arr[i], arr[j]); 
        } 
    } 
    SWAP(arr[i + 1], arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void QuickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = Partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        QuickSort(arr, low, pi - 1); 
        QuickSort(arr, pi + 1, high); 
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
    printf("Performing Quick Sort on Given Array.\n");
    QuickSort(num_arr, 0, len-1);
    printf("Sorted Array: ");
    PrintArray(num_arr, len);

    end_time = clock();

    double execution_time = (double)(end_time - start_time)* 1000.0 / CLOCKS_PER_SEC;
    printf("Code Execution Time: %f Milliseconds\n",  execution_time);
    
    return 0;
}