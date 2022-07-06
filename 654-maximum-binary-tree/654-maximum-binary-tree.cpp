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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return maxBST(nums,0,nums.size()-1);
    }
    
    TreeNode* maxBST(vector<int>& nums,int l, int r)
    {
        if(l>r) return NULL;
        int index=-1;
        int maxx=-1;
        for(int i=l;i<=r;i++)
        {
            if(nums[i]>maxx)
            {
                maxx=nums[i];
                index=i;
            }
        }
        
        TreeNode* root=new TreeNode(maxx);
        root->left=maxBST(nums,l,index-1);
        root->right=maxBST(nums,index+1,r);
        
        return root;
    }
};