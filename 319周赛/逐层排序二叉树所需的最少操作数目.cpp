//#include <vector>
//#include <numeric>
//#include <string>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//class Solution {
//public:
//    int n = 0;
//    vector<vector<int>> nodes;
//
//    void dfs(TreeNode* node, int n) {
//        if (node != nullptr) {
//            nodes.push_back({});
//            nodes[n].push_back(node->val);
//            dfs(node->left, n + 1);
//            dfs(node->right, n + 1);
//        }
//    }
//
//    void quick_sort(vector<int>& list, int l, int r) {
//        if (l >= r)
//            return;
//        int length = list.size();
//        int standard = list[l];
//        int left = l, right = r - 1;
//        while (left < right) {
//            while (left < right && standard <= list[right]) {
//                right--;
//            }
//            while (left < right && standard >= list[left]) {
//                left++;
//            }
//            if (left != right) {
//                swap(list[left], list[right]);
//                n++;
//            }
//        }
//        if (l != right) {
//            swap(list[l], list[right]);
//            n++;
//        }
//        quick_sort(list, l, left);
//        quick_sort(list, left + 1, r);
//    }
//
//    int minimumOperations(TreeNode* root) {
//        dfs(root, 0);
//        for (int i = 0; i < nodes.size(); i++){
//            quick_sort(nodes[i], 0, nodes[i].size());
//        }
//        return n;
//    }
//};
//
//int main() {
//    Solution* solution = new Solution;
//    solution->minimumOperations(nullptr);
//    return 0;
//}