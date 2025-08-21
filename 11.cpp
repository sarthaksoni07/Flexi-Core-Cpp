//array of objects
// we wil see  how we can make an array of objects in cpp
#include <bits/stdc++.h>
using namespace std;

class employee{
    public:
    string name;
    int age;
    char group;

    void putDetails(string s, int a, char g) {
        name = s;
        age = a;
        group = g;
    }
    void getDetails(){
        cout<<"Name : "<<name<<"age : "<<age<<"group : "<<group<<'\n';
    }
};


int main()
{
    employee worker[50];
    employee manager[5];
    employee chairman[3];

    for(int i = 0; i<5;i++){
        cout<<"please put details of worker "<<i+1<<" below"<<'\n';
        string name;
        int age;
        char group;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter group: ";
        cin >> group;
        worker[i].putDetails(name, age, group);
        worker[i].getDetails();
    }

    return 0;
}