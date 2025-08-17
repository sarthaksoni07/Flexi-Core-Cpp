// arrays and 2d arrays
#include<stdio.h>
void printarr(int arr[3][3]){
    for(int i=0; i<3; i++){
        for(int j = 0 ; j<3 ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main(){
    // declaration of array
// int arr[3][3];// creates a 3x3 array
int arr[3][3]={1,2,3,4,5,6,7,8,9};// creates a 3x3 array with automatically arranged elements, after 3 elements, it automatically changes row
int arr2[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
printarr(arr);
// printarr(arr1);
printarr(arr2);
return 0;
}
