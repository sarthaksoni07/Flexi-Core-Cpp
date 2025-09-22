#include <bits/stdc++.h>
using namespace std;
 
class a{
    public:
    int age=10;

    void showage(){
        cout<<"age"<<age<<endl;
    }
};
// class b:public a{};
// class c: public a{};
// class d:public b, public c{};
//this code block would who ambiguity

// correct code
class b :virtual public a{};
class c:virtual public a{};
class d:public b,public c {};

int main()
{

class d d1;
d1.showage();
    return 0;
}