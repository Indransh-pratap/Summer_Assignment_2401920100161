#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    unordered_map<int, int> mp;

    TreeNode *build(vector<int> &preorder, int preStart, int preEnd,
                    vector<int> &inorder, int inStart, int inEnd)
    {

        if (preStart > preEnd || inStart > inEnd)
            return NULL;

        TreeNode *root = new TreeNode(preorder[preStart]);

        int index = mp[root->val];

        int leftNodes = index - inStart;

        root->left = build(preorder, preStart + 1, preStart + leftNodes,inorder,  inStart,  index - 1);
        root->right = build(preorder, preStart + leftNodes + 1, preEnd, inorder, index + 1, inEnd);

        return root;
    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {

        int n = preorder.size();

        for (int i = 0; i < n; i++)
            mp[inorder[i]] = i;

        return build(preorder, 0, n - 1, inorder, 0, n - 1);
    }
};