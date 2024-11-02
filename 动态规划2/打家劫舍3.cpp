//#include <vector>
//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
// 
//
//class Solution {
//public:
//    int maxValue = 0;
//    vector<int> nums;
//    unordered_map<TreeNode*, int> saved;
//
//    int robDfs(TreeNode* root) {
//        if (root) {
//            // 记忆化
//            if (saved[root]) return saved[root];
//
//            // 搜索
//            int value1 = root->val, value2 = 0;
//            if (root->right) value1 += robDfs(root->right->left) + robDfs(root->right->right);
//            if(root->left) value1 += robDfs(root->left->left) + robDfs(root->left->right);
//            value2 = robDfs(root->left) + robDfs(root->right);
//
//            // 保存结果
//            saved[root] = max(value1, value2);
//            return max(value1, value2);
//        }
//        return 0;
//    }
//
//    int rob(TreeNode* root) {
//        return robDfs(root);
//    }
//};
//
//
//int main() {
//    Solution* solution = new Solution;
//    cout << solution->rob(nullptr) << endl;
//    return 0;
//}