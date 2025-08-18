// code to muliply and add 2 matrices 
    #include <stdio.h>
     
    void inputArray(int arr[3][3], int rows, int cols) {
        printf("Enter elements of the array (%d x %d):\n", rows, cols);
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }
    }
     
    void displayArray(int arr[3][3], int rows, int cols) {
        printf("The array is:\n");
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }
    }
     
    void multiply_array(int arr1[3][3], int arr2[3][3]) {
        int result[3][3] = {0};
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                for(int k = 0; k < 3; k++) {
                    result[i][j] = arr1[i][k] * arr2[k][j];
                }
            }
        }
        printf("Product of the two matrices:\n");
        displayArray(result, 3, 3);
    }
     
    void add_array(int arr[3][3], int arr1[3][3]) {
        int result[3][3] = {0};
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                result[i][j] = arr[i][j] + arr1[i][j];
            }
        }
        printf("Sum of the two matrices:\n");
        displayArray(result, 3, 3);
    }
     
    int main() {
        int arr1[3][3];
        int arr2[3][3];
     
        inputArray(arr1, 3, 3);
        inputArray(arr2, 3, 3);
     
        printf("First matrix:\n");
        displayArray(arr1, 3, 3);
     
        printf("Second matrix:\n");
        displayArray(arr2, 3, 3);
     
        add_array(arr1, arr2);
        multiply_array(arr1, arr2);
     
        return 0;
    }