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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> levelOrder; //To store the traversal
        if(root==NULL) return levelOrder;
        queue<TreeNode*> q; //To store the nodes for traversal
        q.push(root);
        while(!q.empty())
        {
            int sz=q.size(); //Getting each element of the level
            vector<int> vc;
            for(int i=0;i<sz;i++)
            {
                TreeNode *node=q.front();
                q.pop();
                //Check if Left and Right exist and push in the queue
                if(node->left!=NULL) q.push(node->left); 
                if(node->right!=NULL) q.push(node->right);
                vc.push_back(node->val);
            }
            levelOrder.push_back(vc);
        }
        return levelOrder;
    }
};