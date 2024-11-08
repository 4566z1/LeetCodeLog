//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	int uniquePaths(int m, int n) {
//		vector<vector<int>> dp(m, vector<int>(n));
//
//		for (int i = 0; i < m; i++) {
//			for (int j = 0; j < n; j++) {
//				if (i == 0) { dp[i][j] = 1; }
//				else if (j == 0) { dp[i][j] = 1; }
//				else { dp[i][j] = dp[i][j - 1] + dp[i - 1][j]; }
//			}
//		}
//		return dp[m - 1][n - 1];
//	}
//};
//
//int main() {
//	Solution *solution = new Solution();
//	cout << solution->uniquePaths(3, 7) << endl;
//	return 0;
//}