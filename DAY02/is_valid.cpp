#include <iostream>
using namespace std; 
class Solution {
public:
    bool isValid(string s) {
      int p = 0,b = 0,f=0;
      for(char sh : s)
        {
          if(sh == '{' || sh == '{')b++;
          else if(sh == '(' || sh == ')')p++;
          else if(sh == '[' || sh == ']')f++;
        }
      return (!(b % 2) && !(p % 2) && !(f % 2));
    }
};
int main(void)
{
  Solution obj;
  cout << obj.isValid("([)");
}
