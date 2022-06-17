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
    int dfs(TreeNode* root,int &sum)
    {
        if(root==NULL)
        {
            return 1;
        }
        int left=dfs(root->left,sum);
        int right=dfs(root->right,sum);
        if(left==1 && right==1)
        {
            return 0;
        }
        else if(left==0 || right==0)
        {
            sum++;
            return 2;
        }
        else 
        {
            return 1;
        }
        return -1;
    }
    
    int minCameraCover(TreeNode* root) {
       int sum=0;
       if(dfs(root,sum)==0) sum++;
       return sum;
    }
};