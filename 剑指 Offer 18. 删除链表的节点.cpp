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
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode *p=head;
        if(p->val==val)
        {
            return p->next;
        }
        while(p)
        {
            if(p->next!=NULL)
            {
                if(p->next->val==val)
                p->next=p->next->next;
            }
            p=p->next;
        }
        return head;
    }
};