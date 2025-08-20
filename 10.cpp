#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int x = 10;
int* ptr = &x;
int** ptr1 = &ptr;
cout<<"the value of x is "<<x<<endl;
cout<<"the adress at which x is stored at is "<<&x<<endl;
cout<<"the value store inside the pointer ptr is :"<<ptr<<endl;
cout<<"the value stored at the memory adress above is"<<*ptr<<endl;
cout<<"the pointer is stored at the memory adress"<<ptr1<<endl;
cout<<"after double derefercing the value stored at base is "<<**ptr1<<endl;

return 0;
}