#include <bits/stdc++.h>
using namespace std;
// in bubble sort, we compare first 2 items in the list, then we compare second and third and then sequentlally third and fourth, in this way ,in the first iteration  , the biggest element is at the last. so then we use the line 12 to reduce the size of array to be sorted, in essence, we know that the largest element is already at the last so we do not include it in sorting

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                // swap
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    printArray(a, n);
    cout<<'\n';
}

void selection_sort(int arr[], int n)
{
    int i, minIndex, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n ;j++){
        if(arr[j]<arr[minIndex]){
            minIndex = j;
        }
        //swapping elements
        temp = arr[i];
        arr[i]= arr[minIndex];
        arr[minIndex]= temp;
        }
    }
    printArray(arr, n);
    cout<<'\n';
}

void insertion_sort(int arr[],int n){
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key, to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printArray(arr, n);
    cout<<'\n';
}
int main()
{
    int arr[] = {2, 3, 5, 6, 8, 3, 7};
    bubble_sort(arr, 7);

    selection_sort(arr, 7);
    return 0;
}