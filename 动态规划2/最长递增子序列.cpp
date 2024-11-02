//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int length = nums.size(), result = 0;
//        if (length == 1)
//            return 1;
//        vector<int> dp(length, 1);
//
//        for (int i = 1; i < length; i++){
//            for (int j = 0; j < i; j++){
//                if (nums[i] > nums[j]) {
//                    dp[i] = max(dp[i], dp[j] + 1);
//                }
//                result = max(dp[i], result);
//            }
//        }
//        return result;
//    }
//};
//
//int main() {
//    vector<int> nums = {
//        0
//    };
//    Solution* solution = new Solution;
//    solution->lengthOfLIS(nums);
//	return 0;
//}