#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    class Calculator {
    public:
        static int add(int a, int b) {
            return a + b;
        }
        static int multiply(int a, int b) {
            return a * b;
        }
    };

    cout << "Sum: " << Calculator::add(5, 3) << endl;
    cout << "Product: " << Calculator::multiply(5, 3) << endl;
return 0;
}