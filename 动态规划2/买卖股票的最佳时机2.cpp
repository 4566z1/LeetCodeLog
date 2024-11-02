//#include <vector>
//#include <iostream>
//#include <numeric>
//using namespace std;
//
///* ��ά��̬�滮 */
////class Solution {
////public:
////    int maxProfit(vector<int>& prices) {
////        int length = prices.size();
////        vector<vector<int>> dp(length, vector<int>(2, 0));
////
////        dp[0][0] = -prices[0];
////        for (int i = 1; i < length; i++){
////            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]);
////            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + prices[i]);
////        }
////        return dp[length - 1][1];
////    }
////};
//
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int length = prices.size();
//        vector<vector<int>> dp(2, vector<int>(2, 0));
//
//        dp[0][0] = -prices[0];
//        for (int i = 1; i < length; i++){
//            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]);
//            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + prices[i]);
//        }
//        return dp[length - 1][1];
//    }
//};
//
//int main() {
//    vector<int> prices = { 7,1,5,3,6,4 };
//    Solution* solution = new Solution;
//    cout << solution->maxProfit(prices) << endl;
//	return 0;
//}