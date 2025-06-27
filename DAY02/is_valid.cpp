#include <iostream>
#include <string>
using namespace std; 
//{ (   )  } is_v
//0 1   2  3
//{( | )}
class Solution {
public:
    bool is_match(char open, char close)
    {
      if ((open == '(' && close == ')') ||
          (open == '{' && close == '}') ||
          (open == '[' && close == ']'))
          return true;
      return false;
    }
    bool is_check(char c)
    {
      return(c == '(' || c == '{' || c =='[');
    }
    bool is_check_close(char c)
    {
      return(c == ')' || c == ']' || c =='}');
    }
    bool isValid(string s) {
        bool is_valid;
        string arr;
        if(!s[0]) return(false);
        for(char sh : s)
        { 
          if(is_check(sh)) arr.push_back(sh);
          else if(is_check_close(sh))
          {
            if(!arr.empty() && is_match(arr.back(), sh))
              arr.pop_back();
            else return false;
          }
        }
        return (arr.empty()) ? true : false; 
    }
};
int main(void)
{
  Solution obj;
  cout << obj.isValid("()");
}
