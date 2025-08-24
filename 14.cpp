// static member function 
// static member and function is used when you want to keep one thing same across all the object 

#include <bits/stdc++.h>
using namespace std;

class cities{
public:
  string name;
  int weather;
  static int date;

  void enterData(int n , string s){
    name = s;
    weather = n;
  }

  void display_Data(){
    cout<<"weather in "<<name<<" on "<<date<<" is "<<weather<<" degrees "<<'\n';
  }
  static void increment_date(){
    date++;
  }
  
  void display_Date(){
    cout<<"on "<<date<<'\n';
  }
};
int cities::date=12;

int main()
{
    cities c1,c2,c3; 
    c1.display_Date(); //this and line 45 shows that the date across all the object remain the same

    c1.enterData(40,"seattle");
    c2.enterData(34,"new jersey");
    c3.enterData(39,"new york");
    
    c1.display_Data();
    c2.display_Data();
    c3.display_Data();
    
    cities::increment_date();
    c2.display_Date();
    
    c1.enterData(30,"seattle");
    c2.enterData(31,"new jersey");
    c3.enterData(35,"new york");

    c1.display_Data();
    c2.display_Data();
    c3.display_Data();
    
    
return 0;
}