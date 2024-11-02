//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int robRange(vector<int>& nums, int begin, int end) {
//        int length = nums.size();
//        vector<int> dp(length + 1, 0);
//
//        dp[begin + 1] = nums[begin];
//        for (int i = 2 + begin; i <= end; i++) {
//            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 1]);
//        }
//        return dp[end];
//    }
//
//    int rob(vector<int>& nums) {
//        if (nums.size() == 1)
//            return nums[0];
//        int result1 = robRange(nums, 0, nums.size() - 1);
//        int result2 = robRange(nums, 1, nums.size());
//        return max(result1, result2);
//    }
//};
//
//int main() {
//    vector<int> nums = { 0, 0 };
//    Solution* solution = new Solution();
//    cout << solution->rob(nums) << endl;
//	return 0;
//}