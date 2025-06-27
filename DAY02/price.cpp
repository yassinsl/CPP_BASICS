#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int min_price = prices[0];
      int max_Profite = 0, profit;
      for(int price : prices)
      {
        if(price < min_price) min_price = price;
        else {
               profit = price  - min_price;
              if(max_Profite < profit) max_Profite = profit;
            }
      }
      return(max_Profite);
    }
};

int main(void)
{
    vector <int> arr = {7,1,5,3,6,4};
    Solution Obj;
    cout << Obj.maxProfit(arr);
}
