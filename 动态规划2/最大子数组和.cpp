//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int length = nums.size(), maxSum = nums[0];
//        vector<int> dp(length, 0);
//
//        dp[0] = nums[0];
//        for (int i = 1; i < length; i++){
//            dp[i] = max(nums[i], dp[i - 1] + nums[i]);
//            maxSum = max(maxSum, dp[i]);
//        }
//        
//        return maxSum;
//    }
//};
//
//int main() {
//    vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };
//    Solution* solution = new Solution;
//    solution->maxSubArray(nums);
//    return 0;
//}