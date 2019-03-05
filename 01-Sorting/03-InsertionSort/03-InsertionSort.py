import time

def InsertionSort(arr, n):
    # Traverse through 1 to len(arr) 
    for i in range(1, n): 
        key = arr[i] 

        # Move elements of arr[0..i-1], that are 
        # greater than key, to one position ahead 
        # of their current position 
        j = i-1
        while j >=0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key

start_time = time.time()

num_arr = [58, 24, 84, 2, 30, 27, 35, 91, 14, 23, 53, 33, 99, 17, 86]
l = len(num_arr)
print("Random Array:", *num_arr)
print('Performing Insertion Sort on Given Array.')
InsertionSort(num_arr, l)
print("Sorted Array:", *num_arr)

end_time = time.time()
execution_time = round(((end_time - start_time)*1000),6)
print("Code Execution Time: %s Milliseconds" % execution_time)