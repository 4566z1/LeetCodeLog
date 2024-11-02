//#include <vector>
//#include <numeric>
//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//    bool canPartition(vector<int>& nums) {
//        int target = 0;
//        int sum = accumulate(nums.begin(), nums.end(), 0);
//        if (sum % 2 == 0)
//            target = sum / 2;
//        else
//            return false;
//
//        vector<int> dp(target + 1, 0);
//        
//        for (int i = 0; i < nums.size(); i++){
//            for (int j = target; j >= nums[i]; j--){
//                dp[j] = max(dp[j], dp[j - nums[i]] + nums[i]);
//                if (dp[target] == target) return true;
//            }
//        }
//        return false;
//    }
//};
//
//int main() {
//    vector<int> nums = { 1,5,11,5 };
//    Solution* solution = new Solution;
//    cout << solution->canPartition(nums) << endl;
//	return 0;
//}