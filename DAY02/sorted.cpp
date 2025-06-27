#include <iostream>

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* ft_merge(ListNode *l1, ListNode *l2)
    {
      ListNode *tmp = l1;
      if(l1)
      {
      while(tmp->next) tmp = tmp->next;
      tmp->next = l2;
      }
      else 
        l1 = l2;
      return(l1);
    }
    void ft_swap(int *a, int *b)
    {
      int swap = *a;
      *a = *b, *b = swap;
    }
    ListNode *sort_list(ListNode *list)
    {
      ListNode *prev, *head = list;
      while(list && list->next)
      {
        if(list->val > list->next->val)
            ft_swap(&list->val, &list->next->val), list = head;
        else list = list->next;
      }
      return head;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      if(!list1 && !list2) return(nullptr);
      ListNode *merge = ft_merge(list1, list2);
      return(sort_list(merge));
    }
};

int main(void)
{
      Solution obj ;
      ListNode *l1 = nullptr;
      ListNode *l2 = new ListNode(0);
      ListNode *ll = obj.mergeTwoLists(l1, l2);
      while(ll)
      {
        std::cout << ll->val << " ";
        ll = ll->next;
      }
}
