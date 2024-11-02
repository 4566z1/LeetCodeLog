//#include <iostream>
//#include <vector>
//using namespace std;
//
//// 暴力算法
////class Solution {
////public:
////    int findLengthOfLCIS(vector<int>& nums) {
////        int length = nums.size(), maxLen = 0;
////
////        for (int i = 0; i < length; i++){
////            int len = 1;
////            for (int j = i + 1; j < length; j++){
////                if (nums[j] > nums[j - 1])
////                    len++;
////                else
////                    break;
////            }
////            maxLen = max(maxLen, len);
////        }
////        return maxLen;
////    }
////};
//
///* 动态规划 */
////class Solution {
////public:
////    int findLengthOfLCIS(vector<int>& nums) {
////        int length = nums.size(), maxLen = 1;
////        vector<int> dp(length, 1);
////        
////        for (int i = 1; i < length; i++){
////            if (nums[i] > nums[i - 1]) {
////                dp[i] = dp[i - 1] + 1;
////            }
////            maxLen = max(maxLen, dp[i]);
////        }
////
////        return maxLen;
////    }
////};
//
///* 贪心算法 */
//class Solution {
//public:
//    int findLengthOfLCIS(vector<int>& nums) {
//        int length = nums.size(), Len = 1, maxLen = 1;
//        
//        for (int i = 1; i < length; i++){
//            if (nums[i] > nums[i - 1]) {
//                Len++;
//            }
//            else {
//                Len = 1;
//            }
//            maxLen = max(maxLen, Len);
//        }
//        return maxLen;
//    }
//};
//
//int main() {
//    vector<int> nums = { 1,2,3,5,4,6 };
//    Solution* solution = new Solution;
//    solution->findLengthOfLCIS(nums);
//	return 0;
//}