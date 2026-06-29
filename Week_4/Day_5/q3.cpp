#include <bits/stdc++.h>
using namespace std;

class Codec {
public:

    string serialize(TreeNode* root) {

        if (root == NULL)
            return "";

        string ans = "";

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            TreeNode* node = q.front();
            q.pop();

            if (node == NULL) {
                ans += "#,";
                continue;
            }

            ans += to_string(node->val);
            ans += ",";

            q.push(node->left);
            q.push(node->right);
        }

        return ans;
    }

    TreeNode* deserialize(string data) {

        if (data.size() == 0)
            return NULL;

        stringstream ss(data);

        string value;

        getline(ss, value, ',');

        TreeNode* root = new TreeNode(stoi(value));

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            TreeNode* node = q.front();
            q.pop();

            getline(ss, value, ',');

            if (value != "#") {

                TreeNode* leftNode = new TreeNode(stoi(value));

                node->left = leftNode;

                q.push(leftNode);
            }

            getline(ss, value, ',');

            if (value != "#") {

                TreeNode* rightNode = new TreeNode(stoi(value));

                node->right = rightNode;

                q.push(rightNode);
            }
        }

        return root;
    }
};