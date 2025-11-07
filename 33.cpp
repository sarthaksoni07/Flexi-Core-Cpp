//class
#include <bits/stdc++.h>
using namespace std;

class student{
    private:
    int age;
    char grade;
    public:
    student(){
        cout<<"contructor called";
    }
    student(int a, char b){
        age = a;
        grade = b;
        cout<<"parametrised constructor called";
    }

    void info(){
        cout<<"age - "<<this->age<<"grade - "<<this->grade;
    }
    ~student(){
        cout<<"deconstructor called";
    }
};

int main()
{
    
 
    return 0;
}