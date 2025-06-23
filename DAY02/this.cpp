#include <iostream>

using namespace std;
class box{
  public :
      int a;
      int b;
      int add(){return( this->a +  this->b);}
}; 
int main(void)
{
    box add;
    add.a = 3;
    add.b = 43;
    cout << "result is :" << add.add() << endl;
}
