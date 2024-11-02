//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int minPathSum(vector<vector<int>>& grid) {
//        int h = grid.size();
//        int w = grid[0].size();
//        vector<vector<int>> dp(h, vector<int>(w));
//
//        for (int i = 0; i < h; i++) {
//            for (int j = 0; j < w; j++){
//                if (i == 0 && j == 0) { dp[0][0] = grid[0][0]; }
//                else if (i == 0) { dp[0][j] = dp[0][j - 1] + grid[0][j]; }
//                else if (j == 0) { dp[i][0] = dp[i - 1][0] + grid[i][0]; }
//                else {
//                    dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
//                }
//            }
//        }
//        return dp[h - 1][w - 1];
//    }
//};
//
//int main() {
//    vector<vector<int>> grid = {
//        {1,2,3},
//        {4,5,6},
//    };
//    Solution* solution = new Solution();
//    solution->minPathSum(grid);
//	return 0;
//}