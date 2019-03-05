import time

def BubbleSort(arr, n):
   # Traverse through all array elements 
   for i in range(n):
      # Last i elements are already in place 
      for j in range(0, n-i-1):
         # traverse the array from 0 to n-i-1 
         # Swap if the element found is greater 
         # than the next element 
         if arr[j] > arr[j+1]:
            arr[j], arr[j+1] = arr[j+1], arr[j] 

start_time = time.time()

num_arr = [58, 24, 84, 2, 30, 27, 35, 91, 14, 23, 53, 33, 99, 17, 86]
l = len(num_arr)
print("Random Array:", *num_arr)
print('Performing Bubble Sort on Given Array.')
BubbleSort(num_arr, l)
print("Sorted Array:", *num_arr)

end_time = time.time()
execution_time = round(((end_time - start_time)*1000),6)
print("Code Execution Time: %s Milliseconds" % execution_time)