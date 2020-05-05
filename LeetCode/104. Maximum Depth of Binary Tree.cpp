//time : O(n)
//space: O(n)

class Solution {
public:
    int calcMaxDepth(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        return max(calcMaxDepth(root->left), calcMaxDepth(root->right)) + 1;
    }
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        return calcMaxDepth(root);
      
        
    }
};