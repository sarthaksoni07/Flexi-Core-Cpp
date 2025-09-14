// write a program to reverse an array 
#include<stdio.h>
void printarr(int a[], int n){
    for(int i=0; i<=n-1;i++){
        printf("%d ",a[i]);
    }
}
void reversearr(int a[], int n){
    for(int i=n-1; i>=0;i--){
        printf("%d ",a[i]);
    }
}
void reveseno2arr(int a[], int n ){
    for (int i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printarr(a, n);
}
 int main(){
int a[]= {1,2,3,4,5}; 

// reversearr(a,5);

reveseno2arr(a, 5);
 return 0;
 }