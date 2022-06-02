/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int res=0;
    int height(TreeNode * root)
    {
        if(root==NULL) return 0;
        return max(height(root->left),height(root->right))+1;
    }
    
    int sum(TreeNode* root,int k,int h)
    {
        if(!root)
        {
            return res;
        }
        if(k==h)
        {
            res+=root->val;
        }
        
        sum(root->left,k+1,h);
        sum(root->right,k+1,h);
        return res;
    }
    
    int deepestLeavesSum(TreeNode* root) 
    {
        int h=height(root);
        res=sum(root,1,h);
        return res;
    }
};