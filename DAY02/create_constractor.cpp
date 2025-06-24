#include <iostream>
using namespace std;

class Class{
  public:
      string my_name;
      Class(string name){
          my_name = name; 
         cout << "my name is: "  << my_name << endl; 
      }
};
int main(void)
{
      Class Yassin("yassin");
}
