//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//        int rows = mat.size();
//        int cols = mat[0].size();
//        vector<vector<int>> dp(rows, vector<int>(cols, INT_MAX - 1));
//
//        for (int i = 0; i < rows; i++) {
//            for (int j = 0; j < cols; j++) {
//                if (mat[i][j] == 0) {
//                    dp[i][j] = 0;
//                }
//                else{
//                    if (i > 0) {
//                        dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
//                    }
//                    if (j > 0) {
//                        dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
//                    }
//                }
//            }
//        }
//
//        for (int i = rows - 1; i >= 0; i--) {
//            for (int j = cols - 1; j >= 0; j--) {
//                if (mat[i][j] == 0) {
//                    dp[i][j] = 0;
//                }
//                else {
//                    if (i != rows - 1) {
//                        dp[i][j] = min(dp[i][j], dp[i + 1][j] + 1);
//                    }
//                    if (j != cols - 1) {
//                        dp[i][j] = min(dp[i][j], dp[i][j + 1] + 1);
//                    }
//                }
//            }
//        }
//        return dp;
//    }
//};
//
//int main() {
//    vector<vector<int>> mat = {
//        {0,0,0},
//        {0,1,0},
//        {1,1,1},
//    };
//    Solution* solution = new Solution;
//    solution->updateMatrix(mat);
//	return 0;
//}