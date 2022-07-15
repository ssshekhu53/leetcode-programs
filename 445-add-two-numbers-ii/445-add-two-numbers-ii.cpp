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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> n1, n2, sum;
        ListNode *res=new ListNode();
        ListNode *cur=res;
        ListNode *prev;
        int carry=0;
        while(l1!=nullptr) {
            n1.push(l1->val);
            l1=l1->next;
        }
        while(l2!=nullptr) {
            n2.push(l2->val);
            l2=l2->next;
        }
        while(!(n1.empty() && n2.empty())) {
            if(n1.empty()) {
                sum.push((n2.top()+carry)%10);
                carry=(n2.top()+carry)/10;
                n2.pop();
            } 
            else if(n2.empty()) {
                sum.push((n1.top()+carry)%10);
                carry=(n1.top()+carry)/10;
                n1.pop();
            } 
            else {
                sum.push((n2.top()+n1.top()+carry)%10);
                carry=(n1.top()+n2.top()+carry)/10;
                n1.pop();
                n2.pop();
            } 
        }
        if(carry!=0)
            sum.push(carry);
        while(!sum.empty()) {
            cur->val=sum.top();
            cur->next=new ListNode();
            prev=cur;
            cur=cur->next;
            sum.pop();
        }
        prev->next=nullptr;
        return res;
    }
};