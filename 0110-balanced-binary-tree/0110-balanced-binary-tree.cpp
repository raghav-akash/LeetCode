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
    int height(TreeNode * root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        return max(height(root->right),height(root->left))+1;
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        
        bool ltree=isBalanced(root->left);
        bool rtree=isBalanced(root->right);
        
        int lh=height(root->left);
        int rh=height(root->right);
        
        int diff=abs(lh-rh);
        
        if(ltree && rtree && diff<=1) return true;
        
        return false;
        
    }
};