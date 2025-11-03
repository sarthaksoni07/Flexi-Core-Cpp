// for dynamic memory allocation 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a= 5;
    int* ptr =&a;
    
    cout<<"adress of a -  "<<ptr<<endl<<"value of a - "<<*ptr;

    int *ptrr = new int; //dynamic memory integer
    delete ptrr;
    int *array = new int[10];
    delete[] array;
    return 0;
}