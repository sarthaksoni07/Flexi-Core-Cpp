#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    int age;
    static int count;
    string name;

public:
    void createstudent(int a, string s)
    {
        age = a;
        name = s;
        count++;
    }
    static void counter()
    {
        cout << "counter:" << count << endl;
    }
};
int student::count = 0;

int main()
{
    student s1, s2, s3;
    student::counter();
    s1.createstudent(20, "sartak");
    s1.createstudent(20, "yash");
    s1.createstudent(20, "sparsh");
    student::counter();
    return 0;
}