import time

def Heapify(arr, n, i): 
    largest = i # Initialize largest as root 
    l = 2 * i + 1     # left = 2*i + 1 
    r = 2 * i + 2     # right = 2*i + 2 
  
    # See if left child of root exists and is 
    # greater than root 
    if l < n and arr[i] < arr[l]: 
        largest = l 
  
    # See if right child of root exists and is 
    # greater than root 
    if r < n and arr[largest] < arr[r]: 
        largest = r 
  
    # Change root, if needed 
    if largest != i: 
        arr[i],arr[largest] = arr[largest],arr[i] # swap 
  
        # Heapify the root. 
        Heapify(arr, n, largest) 
  
# The main function to sort an array of given size 
def HeapSort(arr, n):
    # Build a maxheap. 
    for i in range(n, -1, -1): 
        Heapify(arr, n, i) 
  
    # One by one extract elements 
    for i in range(n-1, 0, -1): 
        arr[i], arr[0] = arr[0], arr[i] # swap 
        Heapify(arr, i, 0)

start_time = time.time()

num_arr = [58, 24, 84, 2, 30, 27, 35, 91, 14, 23, 53, 33, 99, 17, 86]
l = len(num_arr)
print("Random Array:", *num_arr)
print('Performing Heap Sort on Given Array.')
HeapSort(num_arr, l)
print("Sorted Array:", *num_arr)

end_time = time.time()
execution_time = round(((end_time - start_time)*1000),6)
print("Code Execution Time: %s Milliseconds" % execution_time)