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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* tail=head;
       int length=0;
       while(tail)
       {
           length++;
           tail=tail->next;
       }
        tail=head;
        int p=length-n-1;
        
        if(length==n){
            return head->next;
        }
        else{
        while(p--)
        {
            tail=tail->next;
        }
        
        tail->next=tail->next->next;
        }
        return head;
}
};