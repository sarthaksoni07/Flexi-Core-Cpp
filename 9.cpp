// class contructor and deconstructor with constructor overloading
#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    int age;
    string name;
    void setDetails(int a, const string& n) {
        age = a;
        name = n;
    }
    void setDetails(int a){
        age = a;
    }
    void setDetails(string n){
        name = n;
    }

    void setDetails(){
    cout<<"please pass any value"<<endl;
    }
    void callout(){
        cout<<"the name of the student is "<<name<<"and the age is "<<age<<endl;
    }
    ~student(){
        cout<<"the deconstructor was called succesfully without being called in the int main"<<endl;
    }
};
int main()
{
    student S1;
    student S2;
    student S3;
    student S4;

    S1.setDetails(10,"Sarthak");
    S1.callout();
    S2.setDetails(10);
    S2.callout();
    S3.setDetails("sarthak");
    S3.callout();
    S4.setDetails();
    S4.callout();
return 0;
}