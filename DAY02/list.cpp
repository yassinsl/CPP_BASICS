#include <iostream>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
      int div = 0, mod = 0, num = 0 ;
      ListNode *head = nullptr, *tmp, *prev;
      do{
        num = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + div;
        if(num >= 10)
            mod = num % 10, div = num / 10;
        else mod = num, div = 0; // 
        prev = new ListNode(mod, nullptr);
        if(!head)
            tmp = head = prev;
        else {tmp->next = prev, tmp = prev;}
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next; 
      }while(div != 0 || l1 || l2);
      return head;
    }
};

int main(void)
{
  Solution obj ; 
ListNode *l1 = new ListNode(9, new ListNode(9, new ListNode(9)));
ListNode *l2 = new ListNode(9, new ListNode(9, new ListNode(9)));
ListNode *result = obj.addTwoNumbers(l1, l2);
  while(result)
        cout << result->val <<" "<< endl, result = result->next;
}
