#include <stdio.h>
#include <stdlib.h>
#define size 10

int binarysearch(int[], int, int, int);

int main()
{
    int num, i, n, pos;
    int lb, ub, arr[size];
    printf("Enter the total number of elements\n");
    scanf("%d", &num);
    printf("Enter the elements of array: \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("So the array is\n");
    for (i = 0; i < num; ++i)
    {
        printf("%d  ", arr[i]);
    }
    lb = 0;
    ub = num - 1;
    printf("\nEnter element to be searched : \n");
    scanf("%d", &n);
    pos = binarysearch(arr, n, lb, ub);
    if (pos != -1)
    {
        printf("Number present at %d \n", (pos + 1));
    }
    else
        printf("The number is not present in the list\n");
    return 0;
}

int binarysearch(int a[], int x, int low, int high)
{
    int mid;
    if (low > high)
        return -1;
    mid = (low + high) / 2;
    if (x == a[mid])
    {
        return (mid);
    }
    else if (x < a[mid])
    {
        binarysearch(a, x, low, mid - 1);
    }
    else
    {
        binarysearch(a, x, mid + 1, high);
    }
}