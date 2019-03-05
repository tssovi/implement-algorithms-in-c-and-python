def insertion_sort(train, l, count =0):
    for i in range(1, l):
        key = train[i]
        j = i-1
        while j >=0 and key < train[j]: 
            train[j+1] = train[j] 
            count = count + 1
            j -= 1
        train[j+1] = key
    return count

train = []
n = int(input())
for i in range(0,n):
    l = int(input())
    train = list(map(int, input().split()))
    count = insertion_sort(train, l)
    print("Optimal train swapping takes {} swaps.".format(count))