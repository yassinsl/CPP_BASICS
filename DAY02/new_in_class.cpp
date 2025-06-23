#include <iostream>

using namespace std;
class Box{
    public:
        int a;
        int b;
    int add(int a, int b){
      this->a  = a;
      this->b = b;
      return(this->a + this->b);
    }    
    void print_content();
};
void Box::print_content()
{
  cout
        << "is " << this-> add(5, 56)
        << " a value : (" << this->a << " + " << this->b << ") "
        << endl;
}
int main(void)
{
  Box *obj = new Box;
  obj->print_content();
}
