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
    bool equal(TreeNode * tree1, TreeNode* tree2)
    {
        if(tree1==NULL && tree2==NULL) return true;
        if(tree1==NULL || tree2==NULL) return false;
        
     
        return equal(tree1->left,tree2->left) && equal(tree1->right,tree2->right) && (tree1->val==tree2->val);
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL && subRoot==NULL) return true;
        if(root==NULL || subRoot==NULL) return false;
        
        if(equal(root,subRoot)) return true;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};