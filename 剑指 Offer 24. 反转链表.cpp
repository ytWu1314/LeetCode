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
    ListNode* reverseList(ListNode* head) {
        ListNode *p=head;
        ListNode * h=new ListNode(0);
        while(p)
        {
            ListNode * temp=new ListNode(p->val);
            temp->next=h->next;
            h->next=temp;
            p=p->next;
        }
        return h->next;
    }
};