#include <vector>
using namespace std;

/**
 * Definition for singly-linked list.
 */
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        //创建亚节点
        ListNode *stummyHead = new ListNode(-1);
        //移动指针
        ListNode *p = stummyHead;
        //分别比较两个链表值大小，并放入新链表，如果某个链表结束，则循环结束，最后插上没有比较的链表
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val < l2->val)
            {
                p->next = l1;
                l1 = l1->next;
            }
            else
            {
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;

        }
        p->next = l1 == NULL? l2 : l1;
        return stummyHead->next;
        
    }
}; 