#include <iostream>

using namespace std;
class box{
  string h = "Hello I'm Just A simple Person";
  int num;
  public:
      int x;
      int y;
      int add();
};
int box::add(void){
  string yassin = "we are the legend";
  this->h = yassin; 
  cout << this->num << endl;
  cout << this->h << endl;
    return(this->x + this->y);
}
int main(void)
{
    box add;
    add.x = 10;
    add.y = 13;
    cout << add.add() << endl;
}
