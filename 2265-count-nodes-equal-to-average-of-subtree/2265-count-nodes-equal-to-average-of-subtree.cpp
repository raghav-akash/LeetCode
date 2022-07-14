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
    int ans=0;
    int sumofnodes(TreeNode* root)
    {
        if(root==NULL) return 0;
        return root->val+sumofnodes(root->right)+sumofnodes(root->left);
    }
    
    int noofnodes(TreeNode* root)
    {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return 1;
        return 1 + noofnodes(root->left) + noofnodes(root->right);
    }
    
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL) return 0;
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        int sum=sumofnodes(root);
        int nodes=noofnodes(root);
        if(root->val==sum/nodes) 
        {
            ans++;
        }
        return ans;
    }
};