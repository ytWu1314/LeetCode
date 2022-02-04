/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode * p=new ListNode(0); //附加头节点
        ListNode * l3=p;
        while(l1 && l2)
        {
            if(l1->val<=l2->val)
            {
                l3->next=l1;
                l1=l1->next;
                l3=l3->next;
            }
            else
            {
                l3->next=l2;
                l2=l2->next;
                l3=l3->next;
            }
        }
        if(l1)
        {
            l3->next=l1;
        }
        if(l2)
        {
            l3->next=l2;
        }

        return p->next;
    }
};