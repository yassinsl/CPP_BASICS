#include <iostream>

using namespace std; 

int main()
{
  int a, b, c;

  cout << "please enter a numbers: ";
  cin >> a >> b >> c;
  cout << a << b << c << endl;
  if(a == 0)
    cerr << "error" << endl;
  //character log-->clog << "error" << endl;
  return 0;
}
