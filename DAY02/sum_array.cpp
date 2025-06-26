#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> arr;
    Solution(vector<int> array): arr(array){};
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>arr;
      for(int i = 0; i < nums.size() - 1; i++)
        for(int j = i + 1; j < nums.size(); j++)
          if(nums.at(i) + nums.at(j) == target)
                arr.push_back(i), arr.push_back(j);
      return(arr);
    }
    friend ostream& operator<<(ostream &yassin, const Solution& ref);
};
ostream& operator<<(ostream &yassin,  Solution& ref)
{
  vector<int> arr = ref.twoSum(ref.arr, 9);
   for(int i : arr)
      yassin << i << " ";
   return(yassin);
}
int main(void)
{
  vector<int>arr= {0, 4, 5, 0};
	Solution obj(arr);
  cout << obj;
 }
