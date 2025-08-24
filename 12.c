// linear search/ binary search
#include <stdio.h>

void linearSearch(int arr[], int n, int s)
{
    int i;
    for (i = 0; i <= n; i++)
    {
        if (arr[i] == s)
        {
            printf("found at %d\n", i + 1);
        }
    }
    if (i == n)
    {
        printf("not found\n");
    }
}

int binarySearch(int arr[], int n, int s)
{
    int low = 0;
    int high = n - 1;
    while (low <= high) // avoids overflow meaning it wont keep on subtracting
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == s)
        {
            printf("found at %d\n", mid + 1);
            break;
        }
        else if (s > arr[mid])
        {
            low = mid + 1;
        }
        else if (s < arr[mid])
        {
            high = mid - 1;
        }
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};

    linearSearch(arr, 8, 8);
    binarySearch(arr, 8, 8);

    return 0;
}