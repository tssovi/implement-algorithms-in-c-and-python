import time

def MergeSort(arr, n): 
    if n >1: 
        mid = n//2 #Finding the mid of the array 
        L = arr[:mid] # Dividing the array elements  
        R = arr[mid:] # into 2 halves 
  
        MergeSort(L, mid) # Sorting the first half 
        MergeSort(R, mid) # Sorting the second half 
  
        i = j = k = 0
          
        # Copy data to temp arrays L[] and R[] 
        while i < len(L) and j < len(R): 
            if L[i] < R[j]: 
                arr[k] = L[i] 
                i+=1
            else: 
                arr[k] = R[j] 
                j+=1
            k+=1
          
        # Checking if any element was left 
        while i < len(L): 
            arr[k] = L[i] 
            i+=1
            k+=1
          
        while j < len(R): 
            arr[k] = R[j] 
            j+=1
            k+=1

start_time = time.time()

num_arr = [58, 24, 84, 2, 30, 27, 35, 91, 14, 23, 53, 33, 99, 17, 86]
l = len(num_arr)
print("Random Array:", *num_arr)
print('Performing Merge Sort on Given Array.')
MergeSort(num_arr, l)
print("Sorted Array:", *num_arr)

end_time = time.time()
execution_time = round(((end_time - start_time)*1000),6)
print("Code Execution Time: %s Milliseconds" % execution_time)