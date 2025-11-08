//class
#include <bits/stdc++.h>
using namespace std;

class student{
    private:
    int age;
    char grade;
    static int classStrength;

    public:
    student(){
        cout<<"contructor called"<<endl;
        classStrength++;
    }
    student(int a, char b){
        age = a;
        grade = b;
        cout<<"parametrised constructor called"<<endl;
        classStrength++;
    }

    void info(){
        cout<<"age - "<<this->age<<" grade - "<<this->grade<<endl;
    }

    static int getclasscount(){
        return classStrength;
    }
    ~student(){
        cout<<"deconstructor called"<<endl;

    }
};

int student::classStrength = 0;

int main()
{
    student s;
    student s1(12,'a');
    student s2(21,'b');
    s1.info();
    int count = student::getclasscount();
    cout<<count<<endl;
    return 0;
}