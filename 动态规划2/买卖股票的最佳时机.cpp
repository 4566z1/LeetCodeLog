//#include <vector>
//#include <iostream>
//#include <numeric>
//using namespace std;
//
///* 贪心算法 取左最小值，右最大值*/
////class Solution {
////public:
////    int maxProfit(vector<int>& prices) {
////        int maxTotal = 0, leftLow = numeric_limits<int>::max();
////        for (int i = 0; i < prices.size(); i++){
////            leftLow = min(leftLow, prices[i]);
////            maxTotal = max(maxTotal, prices[i] - leftLow);
////        }
////        return maxTotal;
////    }
////};
//
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int length = prices.size();
//        vector<vector<int>> dp(length, vector<int>(2, 0));
//
//        dp[0][0] = -prices[0];
//        for (int i = 1; i < length; i++){
//            dp[i][0] = max(dp[i - 1][0], -prices[i]);
//            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + prices[i]);
//        }
//        return dp[length - 1][1];
//    }
//};
//
//int main() {
//    vector<int> prices = { 7,1,5,3,6,4 };
//    Solution* solutin = new Solution;
//    cout << solutin->maxProfit(prices) << endl;
//	return 0;
//}