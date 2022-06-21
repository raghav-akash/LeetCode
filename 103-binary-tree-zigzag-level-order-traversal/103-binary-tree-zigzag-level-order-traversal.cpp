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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> zigzag;
        if(root==NULL) return zigzag;
        
        queue<TreeNode*> q;
        q.push(root);
        bool lr=true; // To know if we are going LtoR or RtoL, true is lr,false is rl;
        
        while(!q.empty())
        {
            int size=q.size();
            vector<int> vc(size);
            for(int i=0;i<size;i++)
            {
                TreeNode *node=q.front();
                q.pop();
    
                int index= (lr)? i:(size-1-i); //If lr is true we store from front or else from the back
                vc[index]=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            zigzag.push_back(vc);
            lr=!lr; //Change lr to negative lr for the next level
        }
        return zigzag;
    }
};