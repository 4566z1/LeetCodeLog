//#include <vector>
//#include <numeric>
//using namespace std;
//
//class Solution {
//public:
//    bool canPartitionKSubsets(vector<int>& nums, int k) {
//        int target = 0, hits = 0;
//        int sum = accumulate(nums.begin(), nums.end(), 0);
//        if (sum % 4 == 0)
//            target = sum / 4;
//        else
//            return false;
//
//        vector<int> dp(target + 1, 0);
//        for (int i = 0; i < nums.size(); i++){
//            for (int j = target; j >= nums[i]; j--){
//                dp[j] = max(dp[j], dp[j - nums[i]] + nums[i]);
//            }
//            if (dp[target] == target)
//                hits++;
//        }
//
//        if (dp[target] == target)
//            return true;
//        else
//            return false;
//    }
//};
//
//int main() {
//    vector<int> nums = { 4, 3, 2, 3, 5, 2, 1 };
//    Solution* solution = new Solution;
//    solution->canPartitionKSubsets(nums, 4);
//	return 0;
//}