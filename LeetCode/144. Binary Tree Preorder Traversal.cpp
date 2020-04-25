//time : O( logn )
//space : O( n )
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    
public:
    vector <int> ans;
    void called(TreeNode* root)
    {
        if(root == NULL)
            return ;
        ans.push_back(root->val);
        called(root->left);
        called(root-> right);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
       called(root);
        return ans;
    }
};