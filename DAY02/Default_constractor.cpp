#include <iostream>
using namespace std;
class Class{
    int x, y;
    public:
    Class(){
      this->x = 10;
      this->y = 43;
      cout << "value the x ::" <<this->x << endl; 
      cout << "value the y ::" <<this->y<< endl; 
    }
};
int main(void)
{
    Class obj;
}
