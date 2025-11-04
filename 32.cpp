// for dynamic memory allocation 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a= 5;
    int* ptr =&a;
    
    cout<<"adress of a -  "<<ptr<<endl<<"value of a - "<<*ptr<<endl;

    int *ptrr = new int; //dynamic memory integer
    *ptrr = 5;
    cout<<*ptrr<<endl;
    // delete ptrr;
    int *array = new int[10]{1,2,3,4};
    cout<<array[0]<<endl;

    // delete[] array;
    return 0;
}