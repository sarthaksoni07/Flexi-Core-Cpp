#include <bits/stdc++.h>
using namespace std;

class bankaccout{
    private:
    int balance=0;

    public:
 
    void get_balance(){
        cout<<"your account balancce is: "<<balance<<'\n';
    }

    void deposit(int x){
        balance+=x;
    }

    void withdraw(int x){
        balance-=x;
    }

};


int main()
{
    bankaccout sarthak;
    sarthak.get_balance();
    sarthak.deposit(100);
    sarthak.get_balance();
    sarthak.withdraw(50);
    sarthak.get_balance();

return 0;
}