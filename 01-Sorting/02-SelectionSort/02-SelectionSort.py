import time

def SelectionSort(arr, n):
   # Traverse through all array elements 
   for i in range(n):

      # Find the minimum element in remaining  
      # unsorted array 
      min_idx = i
      for j in range(i+1, n):
         if arr[min_idx] > arr[j]:
            min_idx = j

      # Swap the found minimum element with
      # the first element    
      arr[i], arr[min_idx] = arr[min_idx], arr[i]

start_time = time.time()

num_arr = [58, 24, 84, 2, 30, 27, 35, 91, 14, 23, 53, 33, 99, 17, 86]
l = len(num_arr)
print("Random Array:", *num_arr)
print('Performing Selection Sort on Given Array.')
SelectionSort(num_arr, l)
print("Sorted Array:", *num_arr)

end_time = time.time()
execution_time = round(((end_time - start_time)*1000),6)
print("Code Execution Time: %s Milliseconds" % execution_time)