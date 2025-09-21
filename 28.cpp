// friend function
#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    int age;
    string name;

public:
    student(int a, string s) : age(a), name(s) {}

    friend void print(student s);
    friend class teacher;
};
class teacher
{
private:
    int age;
    string name;

public:
    teacher(int a, string s) : age(a), name(s) {}


    void showstudent(student s)
    {
        cout << "name " << s.name << " age " << s.age << endl;
    }
};
void print(student s)
{
    cout << "age " << s.age << " name " << s.name << endl;
}
int main()
{
    student s1(20, "sarthak");
    // print(s1);
    teacher t1(39,"namita");
    t1.showstudent(s1);
    return 0;
}