#include<stdio.h>
#include<time.h> 

#define ARRAY_LEN(x)  (sizeof(x) / sizeof((x)[0]))

void InsertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
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
    printf("Performing Insertion Sort on Given Array.\n");
    InsertionSort(num_arr, len);
    printf("Sorted Array: ");
    PrintArray(num_arr, len);

    end_time = clock();

    double execution_time = (double)(end_time - start_time)* 1000.0 / CLOCKS_PER_SEC;
    printf("Code Execution Time: %f Milliseconds\n",  execution_time);

    return 0;
}