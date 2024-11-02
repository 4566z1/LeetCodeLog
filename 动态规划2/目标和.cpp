//#include <iostream>
//#include <vector>
//#include <stack>
//#include <numeric>
//#include <algorithm>
//using namespace std;
//
//// 递归-回溯剪枝(超时)
////class Solution {
////public:
////    bool dfs(vector<int>& nums, int& target, int& hits, int& calc_num, int operation, int index) {
////        if (index < nums.size()) {
////            calc_num += operation*nums[index];
////            if (target == calc_num && index + 1 == nums.size()) {
////                hits++;
////                return true;
////            }
////
////            if(dfs(nums, target, hits, calc_num, 1, index + 1))
////                calc_num -= 1 * nums[index + 1];
////            if(dfs(nums, target, hits, calc_num, -1, index + 1))
////                calc_num -= -1 * nums[index + 1];
////            return true;
////        }
////        return false;
////    }
////
////    int findTargetSumWays(vector<int>& nums, int target) {
////        int hits = 0, calc_num = 0;
////        dfs(nums, target, hits, calc_num, 1, 0);
////        calc_num = 0;
////        dfs(nums, target, hits, calc_num, -1, 0);
////        return hits;
////    }
////};
//
///* 动态规划(类背包问题) */
//class Solution {
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        int total = accumulate(nums.begin(), nums.end(), 0);
//        int pos = total + target, neg = total - target, capcity;
//        if (pos % 2 || abs(target) > total)
//            return 0;
//
//        capcity = min(pos / 2, neg / 2);
//        vector<int> dp(capcity + 1, 0);
//
//        dp[0] = 1;
//        for (int i = 1; i <= nums.size(); i++){
//            for (int j = capcity; j >= nums[i - 1]; j--){
//                dp[j] = dp[j] + dp[j - nums[i - 1]];
//            }
//        }
//        return dp[capcity];
//    }
//};
//
//int main() {
//    vector<int> nums = {
//        1000
//    };
//    Solution* solution = new Solution;
//    cout << solution->findTargetSumWays(nums, -1000) << endl;
//    return 0;
//}