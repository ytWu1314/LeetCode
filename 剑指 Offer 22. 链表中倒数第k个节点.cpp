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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        if(!head) return NULL;

        ListNode * ans=head;
        ListNode * p=head;
        int cnt=0;
        while(p)
        {
            cnt++;
            p=p->next;
        }
        while(cnt>k)
        {
            ans=ans->next;
            cnt--;
        }
        return ans;
    }
};