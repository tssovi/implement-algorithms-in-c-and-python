#include<stdio.h>

int train[64], count;
int l, n, i, j, key;

int insertion_sort(int *train)
{
    /*
    *
    * Insertion sort using inner for loop
    *
    */
    for(i = 1; i < l; ++i)
    {
        key = train[i];
        for(j = i - 1; j >= 0 && train[j] > key; --j)
        {
            train[j + 1] = train[j];
            ++count;
        }
        train[j + 1] = key;
    }
  return count;
}

int main()
{
    scanf("%d", &n);
    while(n--)
    {
        count = 0;
        scanf("%d", &l);
        for(i = 0; i < l; ++i)
            scanf("%d", &train[i]);
 
        count = insertion_sort(train);
 
        printf("Optimal train swapping takes %d swaps.\n", count);
    }
    return 0;
}