#include <bits/stdc++.h>
using namespace std;
// flexi core c topics
//  classes
//  classes are a blueprint to create objects in c++
class student
{
public:
    int age;
    string name;

    void callout()
    {
        cout << name << " is " << age << " years old\n";
    }
};
int main()
{
    student s1;
    s1.name = "Sarthak";
    s1.age = 21;
    s1.callout();
    return 0;
}