//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int rob(vector<int>& nums) {
//		int length = nums.size();
//		vector<int> dp(length + 1, 0);
//		
//		for (int i = 1; i <= length; i++){
//			if (i == 1) { dp[1] = nums[0]; }
//			else { dp[i] = max(dp[i - 1], nums[i - 1] + dp[i - 2]); }
//		}
//		return dp[length];
//    }
//};
//
//int main() {
//	vector<int> nums = { 2,7,9,3,1,5 };
//	Solution* solution = new Solution;
//	cout << solution->rob(nums);
//	return 0;
//} 