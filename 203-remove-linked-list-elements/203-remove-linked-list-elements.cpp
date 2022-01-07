/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *cur, *prev;
        prev=nullptr;
        prev=cur=head;
        while(cur!=nullptr) {
            if(cur->val==val) {
                if(prev==cur)
                    head=prev=cur->next;
                else
                    prev->next=cur->next;
            }
            else
                prev=cur;
            cur=cur->next;
        }
        return head;
    }
};