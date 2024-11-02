//#include <iostream>
//#include <vector>
//#include <numeric>
//using namespace std;
//
//int solution(vector<int> nums, int target) {
//	int sum = accumulate(nums.begin(), nums.end(), 0);
//	int neg = sum - target, capcity;
//	if (neg % 2)
//		return 0;
//	else
//		capcity = min(neg / 2, sum - neg / 2);
//
//	vector<int> dp(capcity + 1, 0);
//
//	dp[0] = 1;
//	for (int i = 1; i <= nums.size(); i++){
//		for (int j = capcity; j >= nums[i - 1]; j--){
//			dp[j] = dp[j] + dp[j - nums[i - 1]];
//		}
//	}
//
//	return dp[capcity];
//}
//
//int main() {
//	vector<int> nums = { 1,1,1,1,1 };
//	solution(nums, 3);
//	return 0;
//}