#include <stdio.h>
#include <math.h>
    int m, n;

int trace(int arr[m][n]){
 // trace
    int trace = 0;
    int min_dim = (m < n) ? m : n;
    for (int i = 0; i < min_dim; i++)
    {
        trace += arr[i][i];
    }
    printf("trace is: %d\n", trace);
}
int norm(int arr[m][n]){
  int norm;
    int temp = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp += arr[i][j] * arr[i][j];
        }
    }
    norm = sqrt(temp);
    printf("norm is %d\n", norm);
}

int main()
{
    // to find trace and norm of a matrix.
    printf("enter the size of the array in form of m x n ;");

    scanf("%d %d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the element %d x %d of the matrix", i,j);
            scanf("%d", &arr[i][j]);
        }
    }

   trace(arr);
   norm(arr);
  

    return 0;
}