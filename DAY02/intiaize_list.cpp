#include <iostream>
using namespace std;
class Class{
      private:
          int y,x;
      public:
         Class(int y, int x): x(x) ,y(y) {}
        void print_content()
        {
              cout << "value is :" << this->x << " and " << this->y << endl;
        }
};
int main(void)
{
    Class obj(2, 4);
    obj.print_content();
}
