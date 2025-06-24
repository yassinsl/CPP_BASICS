#include  <iostream>
using namespace std;
int main(void)
{
  int num = 33;
  int &ref = num;
  ref = 36;
  cout << ref << endl;
}
