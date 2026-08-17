// code to use interation to calculate max depth of tree
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    stack<pair<TreeNode*, int>> s;
    s.push({root, 1});
    int maxDepth = 0;

    while (!s.empty()) {
        auto [node, depth] = s.top();
        s.pop();
        if (node) {
            maxDepth = max(maxDepth, depth);
            s.push({node->left, depth + 1});
            s.push({node->right, depth + 1});
        }
    }

    return maxDepth;
}

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    int depth = maxDepth(root);
    cout << "Maximum depth of the binary tree: " << depth << endl;

    // Clean up memory (delete nodes)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}