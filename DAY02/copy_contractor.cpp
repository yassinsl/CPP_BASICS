#include <iostream>
#include <string>

using namespace std;

class Class{
      private:
          int y, x;
      public:
          Class(int y, int x) : y(y), x(x){
            cout << x << endl;
          }
          Class(const Class &Other){
              this->y = Other.y;
              this->x = Other.x;
              cout << "value x is :" << this->x << endl;
          }
};
int main(void)
{
    Class obj(3, 2);
    Class obj1 = obj;
}
