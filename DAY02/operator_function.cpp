#include <iostream>
using namespace std;
class Class{
  private:
      int x, y;
  public:
      Class(int x, int y) : x(x), y(y){}
      friend ostream& operator<<(ostream & my_cout, const Class &op);
};
ostream& operator<<(ostream & my_cout, const Class &op)
{
    my_cout << "this the value x: " << op.x << endl;
    return(my_cout);
}
int main(void)
{
      Class op(43, 55);
      cout << op << endl;
}
