/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void traverse(Node * root, vector<int> &vc)
    {
        if(root==NULL) return;
        vc.push_back(root->val);
        for(auto x: root->children)
        {
            traverse(x,vc);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> vc;
        traverse(root,vc);
        return vc;
    }
};