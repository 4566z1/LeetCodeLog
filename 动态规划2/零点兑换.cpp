//#include <vector>
//using namespace std;
//
///* 二维动态规划 */
////class Solution {
////public:
////    int change(int amount, vector<int>& coins) {
////        int length = coins.size();
////        vector<vector<int>> dp(length, vector<int>(amount + 1, 0));
////
////        for (int i = 0; i < length; i++){
////            for (int j = 0; j <= amount; j++){
////                if (i == 0) {
////                    if (j % coins[0] == 0) {
////                        dp[0][j] = 1;
////                    }
////                }
////                else if (j == 0) {
////                    dp[i][j] = 1;
////                }
////                else if (j < coins[i]) {
////                    dp[i][j] = dp[i - 1][j];
////                }
////                else {
////                    dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i]];
////                }
////            }
////        }
////
////        return dp[length - 1][amount];
////    }
////};
//
///* 一维动态规划*/
////class Solution {
////public:
////    int change(int amount, vector<int>& coins) {
////        int length = coins.size();
////        vector<int> dp(amount + 1, 0);
////
////        dp[0] = 1;
////        for (int j = 1; j <= amount; j++){
////            if (j % coins[0] == 0) { dp[j] = 1; }
////        }
////
////        for (int i = 1; i < length; i++){
////            for (int j = coins[i]; j <= amount; j++){
////                dp[j] += dp[j - coins[i]];
////            }
////        }
////        return dp[amount];
////    }
////};
//
//int main() {
//    vector<int> coins = { 5 };
//    Solution* solution = new Solution;
//    solution->change(10, coins);
//	return 0;
//}