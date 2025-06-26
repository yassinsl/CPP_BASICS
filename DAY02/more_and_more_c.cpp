#include <iostream>
using namespace std;
class Class;

class me{
  public:
      void print(Class &ref);
};

class Class{
    private:
          int x;
          int y;
      public:
          Class(int x, int y) : x(x), y(y){};
          friend  class me;
          void print_content()
          { 
            cout << "this is new value x :" << this->x << endl;
          }
};
void me::print(Class &ref){
    cout << "Yes I Have a access Private var: " << ref.x << endl;
    ref.x = 353;
}
int main(void)
{
    Class Ob(3, 5);
    me yassin;
    yassin.print(Ob);
    Ob.print_content();
}
