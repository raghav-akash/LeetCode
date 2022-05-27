class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,first,second;
        ListNode* head=new ListNode(0);
        ListNode* t=head;
        
        while(carry || l1 || l2)
        {
            if(l2)
            {
                second=l2->val;
            }
            else
            {
                second=0;
            }
            
            if(l1)
            {
                first=l1->val;
            }
            else
            {
                first=0;
            }
            int val=carry+first+second;
            t->next=new ListNode(val%10);
            carry=val/10;  
            t=t->next;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
            
        }
        
        return head->next;
    }
};