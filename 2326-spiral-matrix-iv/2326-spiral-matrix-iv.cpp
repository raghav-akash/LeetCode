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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
       vector<vector<int>> vc(m,vector<int>(n,-1));
       int urow=0,lcol=0,brow=m-1,rcol=n-1;
       int i=0,j=0;
       while(head!=NULL)
       {
           while(j<=rcol && head!=NULL)
           {
               vc[urow][j]=head->val;
               j++;
               head=head->next;
           }
           urow++;
           i=urow;
           while(i<=brow && head!=NULL)
           {
               vc[i][rcol]=head->val;
               i++;
               head=head->next;
           }
           rcol--;
           j=rcol;
           while(j>=lcol && head!=NULL)
           {
               vc[brow][j]=head->val;
               j--;
               head=head->next;
           }
           brow--;
           i=brow;
           while(i>=urow && head!=NULL)
           {
               vc[i][lcol]=head->val;
               i--;
               head=head->next;
           }
           lcol++;
           j=lcol;
       }
      return vc;
    }
};