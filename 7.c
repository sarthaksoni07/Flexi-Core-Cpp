//symmetric matrix

#include<stdio.h>
#include<stdlib.h>
void symmetric(int m, int n, int arr[m][n]){
    if (m != n) {
        printf("the matrix is not symmetric (not a square matrix)\n");
        return;
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] != arr[j][i]){
                printf("the matrix is not symmetric\n");
                return;
            }
        }
    }
    printf("matrix is symmetric\n");
}

int main(){
    int m, n;
    printf("enter the size of the array in form of m x n : ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the element %d x %d of the matrix: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    symmetric(m, n, arr);
    return 0;
}