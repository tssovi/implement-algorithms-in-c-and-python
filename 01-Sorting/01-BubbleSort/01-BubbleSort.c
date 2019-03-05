#include<stdio.h>
#include<time.h> 

#define ARRAY_LEN(x) (sizeof(x) / sizeof((x)[0]))

#define SWAP(a, b) ((&(a) == &(b)) ? (a) : ((a)^=(b),(b)^=(a),(a)^=(b)))

void BubbleSort(int arr[], int n) 
{
   int i, j; 
   for (i = 0; i < n-1; i++)
   {
      for (j = 0; j < n-i-1; j++)
      {
         if (arr[j] > arr[j+1])
            SWAP(arr[j], arr[j+1]);
      }  
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
   printf("Performing Bubble Sort on Given Array.\n");
   BubbleSort(num_arr, len);
   printf("Sorted Array: ");
   PrintArray(num_arr, len);

   end_time = clock();

   double execution_time = (double)(end_time - start_time)* 1000.0 / CLOCKS_PER_SEC;
   printf("Code Execution Time: %f Milliseconds\n",  execution_time);

   return 0;
}