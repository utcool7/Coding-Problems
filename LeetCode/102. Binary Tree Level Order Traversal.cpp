//time : O(n)
//space :O(n)

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
        vector<vector<int>> res;
        if(!root) return res;
        queue <TreeNode* > q;
        q.push(root);
        while(true)
        {
            int count = q.size();
            if(count == 0)
            {
                break ;
            }
            vector <int> level;
            while(count > 0)
            {
                
                auto deeper = q.front();
                q.pop();
                level.push_back(deeper->val);
                if(deeper->left != NULL)
                    q.push(deeper->left);
                if(deeper-> right != NULL)
                    q.push(deeper->right);
                
                count--;
                
            }
            res.push_back(level);
            
        }
        return res;
            
    }
};