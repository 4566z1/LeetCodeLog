//#include <iostream>
//#include <vector>
//using namespace std;
//
//void solution(vector<int>& weights, vector<int>& values, int maxWeight) {
//	vector<vector<int>> dp(weights.size(), vector<int>(maxWeight + 1, 0));
//
//	for (int i = 1; i < weights.size(); i++){
//		for (int j = 0; j <= maxWeight; j++){
//			if (j == 0) { dp[0][j] = 0; }
//			else if (i == 0 && j >= weights[0]) { dp[0][j] = values[0]; }
//			else {
//				if (j < weights[i]) {
//					dp[i][j] = dp[i - 1][j];
//				}
//				else {
//					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weights[i]] + values[i]);
//				}
//			}
//		}
//	}
//
//	return;
//}
//
//int main() {
//	vector<int> weights = {
//		1,3,4
//	};
//	vector<int> values = {
//		15,20,30
//	};
//	solution(weights, values, 4);
//	return 0;
//}