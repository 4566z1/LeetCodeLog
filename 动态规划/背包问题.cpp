//#include <vector>
//#include <iostream>
//using namespace std;
//
///* 二维dp数组解决方案 */
////int solution(vector<int>weights, vector<int>values, int maxWeight) {
////	int valueNum = values.size();
////	int weightNum = maxWeight + 1;
////	vector<vector<int>> dp(valueNum, vector<int>(weightNum, 0));
////
////	for (int i = 0; i < valueNum; i++){
////		for (int j = 0; j < weightNum; j++){
////			if (j == 0) { dp[i][0] = 0; }
////			else if (i == 0 && j >= weights[i]) { dp[0][j] = values[0]; }
////			else {
////				if (weights[i] > j) {
////					dp[i][j] = dp[i - 1][j];
////				}
////				else {
////					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weights[i]] + values[i]);
////				}
////			}
////		}
////	}
////	return dp[valueNum - 1][maxWeight];
////}
//
///* 滚动数组 */
//int solution(vector<int>weights, vector<int>values, int maxWeight) {
//	int valuesNum = values.size();
//	vector<int> dp(maxWeight + 1, 0);
//
//
//	for (int i = 0; i < valuesNum; i++){
//		for (int j = maxWeight; j >= weights[i]; j--){
//			dp[j] = max(dp[j], dp[j - weights[i]] + values[i]);
//		}
//	}
//	return dp[maxWeight];
//}
//
//
//int main() {
//	cout << solution({ 1, 3, 4 }, { 15, 20, 30 }, 4) << endl;
//	return 0;
//}