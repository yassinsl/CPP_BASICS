#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
class Solution 
{
public:
    string get_simple_arr(string s)
    {
      string arr;
      for(char c: s)
        if(isalpha(c))
          c = tolower(c), arr.push_back(c);

      return(arr);
    }
    bool isPalindrome(string s) {
      string arr;
      arr = get_simple_arr(s);
      if(!arr.size()) return true;
      int i =-1, j = arr.size(), count = 0;
      while(++i < --j)
          if(arr[i] == arr[j])
                count++;
      return(count == arr.size() / 2);
    }
};
int main(void)
{
    string arr ="A man, a plan, a canal: Panama";
    Solution obj;
    cout << obj.isPalindrome(arr) << endl;
}
