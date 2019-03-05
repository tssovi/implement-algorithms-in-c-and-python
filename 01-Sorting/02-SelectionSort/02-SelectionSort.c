#include<stdio.h>
#include<time.h> 

#define ARRAY_LEN(x) (sizeof(x) / sizeof((x)[0]))

#define SWAP(a, b) ((&(a) == &(b)) ? (a) : ((a)^=(b),(b)^=(a),(a)^=(b)))

void SelectionSort(int arr[], int n) 
{
   int i, j, min_idx; 

   // One by one move boundary of unsorted subarray 
   for (i = 0; i < n-1; i++) 
   { 
      // Find the minimum element in unsorted array 
      min_idx = i; 
      for (j = i+1; j < n; j++) 
         if (arr[j] < arr[min_idx]) 
         min_idx = j; 

      // Swap the found minimum element with the first element 
      SWAP(arr[min_idx], arr[i]); 
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
   printf("Performing Selection Sort on Given Array.\n");
   SelectionSort(num_arr, len);
   printf("Sorted Array: ");
   PrintArray(num_arr, len);

   end_time = clock();

   double execution_time = (double)(end_time - start_time)* 1000.0 / CLOCKS_PER_SEC;
   printf("Code Execution Time: %f Milliseconds\n",  execution_time);

   return 0;
}