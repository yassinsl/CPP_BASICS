#include <iostream>
using namespace std;

class friend_class;
class Class
{
    private:
      string arr;
    public:
      Class(string array): arr(array){}
      friend class friend_class;
}; 
class friend_class
{
  public:
      void print_content(Class &Class)
      {
          cout << "This is the content: " << Class.arr << endl;
      }
};
int main(void)
{
      Class obj("Yassin Lahssini");
      friend_class obj_1;
      obj_1.print_content(obj);
}
