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
        called(root->left);
        called(root-> right);
        ans.push_back(root->val);
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
         called(root);
         return ans;
        
    }
};