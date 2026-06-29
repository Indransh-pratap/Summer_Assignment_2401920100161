
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int height = 0;
     
        if(root==NULL) return 0;
                 
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

            height = 1+max(left,right);
        
        return  height;
    }
};