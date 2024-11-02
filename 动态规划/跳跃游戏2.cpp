//#include <iostream>
//#include <vector>
//using namespace std;
//
///* 动态规划 + 贪心算法 */
////class Solution {
////public:
////    int jump(vector<int>& nums) {
////        int length = nums.size();
////        vector<int> dp(length);
////
////        int j = 0;
////        for (int i = 0; i < length; i++){
////            if (i == 0) { dp[0] = 0; }
////            else if (i == 1) { dp[1] = 1; }
////            else {
////                while(nums[j] < i - j) {
////                    j++;
////                }
////                dp[i] = dp[j] + 1;
////            }
////        }
////        
////        return dp[length - 1];
////    }
////};
//
//class Solution {
//public:
//    int jump(vector<int>& nums) {
//        int step = 0;
//        int max_length = 0;
//        int end = 0;
//
//        for (int i = 0; i < nums.size() - 1; i++){
//            max_length = max(max_length, i + nums[i]);
//            
//            if (i == end) {
//                end = max_length;
//                step++;
//            }
//        }
//        return step;
//    }
//};
//
//int main() {
//    vector<int> nums = { 2,3,0,1,4 };
//    Solution* solution = new Solution();
//    cout << solution->jump(nums) << endl;
//	return 0;
//
//}