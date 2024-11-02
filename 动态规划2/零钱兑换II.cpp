//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int coinChange(vector<int>& coins, int amount) {
//        if (!amount)
//            return 0;
//        constexpr int max_int = numeric_limits<int>::max();
//        vector<int> dp(amount + 1, max_int);
//
//        dp[0] = 0;
//        for (int i = 0; i < coins.size(); i++){
//            for (int j = coins[i]; j <= amount; j++){
//                if(dp[j - coins[i]] != max_int)
//                    dp[j] = min(dp[j], dp[j - coins[i]] + 1);
//            }
//        }
//
//        return dp[amount] != max_int ? dp[amount] : -1;
//    }
//};
//
//int main() {
//    vector<int> coins = { 1, 2, 5 };
//    Solution* solution = new Solution;
//    solution->coinChange(coins, 11);
//	return 0;
//}