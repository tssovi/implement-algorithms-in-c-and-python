#include<stdio.h>
#include<time.h> 

#define ARRAY_LEN(x) (sizeof(x) / sizeof((x)[0]))

#define SWAP(a, b) ((&(a) == &(b)) ? (a) : ((a)^=(b),(b)^=(a),(a)^=(b)))

void Heapify(int arr[], int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    // If largest is not root 
    if (largest != i) 
    { 
        SWAP(arr[i], arr[largest]); 
        // Recursively heapify the affected sub-tree 
        Heapify(arr, n, largest); 
    } 
} 
  
// main function to do heap sort 
void HeapSort(int arr[], int n) 
{
    // Build heap (rearrange array) 
    for (int i = n / 2 - 1; i >= 0; i--) 
        Heapify(arr, n, i); 
  
    // One by one extract an element from heap 
    for (int i=n-1; i>=0; i--) 
    { 
        // Move current root to end 
        SWAP(arr[0], arr[i]); 
  
        // call max heapify on the reduced heap 
        Heapify(arr, i, 0); 
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
    printf("Performing Heap Sort on Given Array.\n");
    HeapSort(num_arr, len);
    printf("Sorted Array: ");
    PrintArray(num_arr, len);

    end_time = clock();

    double execution_time = (double)(end_time - start_time)* 1000.0 / CLOCKS_PER_SEC;
    printf("Code Execution Time: %f Milliseconds\n",  execution_time);
    
    return 0;
}