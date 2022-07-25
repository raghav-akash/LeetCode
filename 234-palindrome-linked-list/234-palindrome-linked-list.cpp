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
    bool isPalindrome(ListNode* head) {
       vector<int> vc;
       vector<int> vcr;
        
       while(head)
       {
           vc.push_back(head->val);
           head=head->next;
       }
        
       for(int i=vc.size()-1;i>=0;i--){
           vcr.push_back(vc[i]);
       }
        
        for(int j=0;j<vc.size();j++){
            if(vc[j]!=vcr[j]){
                return false;
            }
        }
        return true;
    }
};