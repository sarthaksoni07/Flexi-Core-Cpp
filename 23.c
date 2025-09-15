#include <stdio.h>
void printarr(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] != 0)
        {
            printf("%d ", a[i]);
        }
    }
}
void insertAt(int a[], int v, int p, int s)
{
    for (int i = s; i >= p; i--)
    {
        a[i + 1] = a[i];
    }
    a[p] = v;

    printarr(a, s);
}

void deletefrom(int a[], int p, int s)
{
    for (int i = p; i <= s - 1; i++)
    {
        a[i] = a[i + 1];
    }
    a[s - 1] = 0;
    printarr(a, s);
}

void insertsort(int a[], int v, int s)
{
    int i;
    // Find the position to insert
    for (i = 0; i < s; i++)
    {
        if (a[i] == 0 || a[i] > v)
            break;
    }
    // Shift elements to the right
    for (int j = s - 1; j > i; j--)
    {
        a[j] = a[j - 1];
    }
    a[i] = v;
    printarr(a, s);
}
int main()
{
    // write a program to insert into an array

    int a[10] = {1, 2, 4, 5};
    int s = sizeof(a) / sizeof(a[0]);
    // insertAt(a, 3, 4, s);
    // deletefrom(a, 2, s);
    insertsort(a,3,s);
    return 0;
}