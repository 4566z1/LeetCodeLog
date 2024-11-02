#include <vector>
#include <stack>
#include <queue>
#include <iostream>
using namespace std;


/* 函数递归版本 */
//class Solution {
//public:
//    int num = 0;
//    int maxGridNum = 0;
//    int direction[5] = { 0, 1, 0, -1, 0 };
//
//    void dfs(vector<vector<int>>& grid, int& m, int& n) {
//        num++;
//        int rows = grid.size();
//        int cols = grid[0].size();
//        int row, col;
//        for (int i = 0; i < 4; i++){
//            row = m + direction[i];
//            col = n + direction[i + 1];
//            if ((row < rows) && (row >= 0) && (col < cols) && (col >= 0)) {
//                if (grid[row][col] == 1) {
//                    grid[row][col] = 0;
//                    dfs(grid, row, col);
//                }
//            }
//        }
//        return;
//    }
//
//    int maxAreaOfIsland(vector<vector<int>>& grid) {
//        int m = grid.size();
//        int n = grid[0].size();
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                if (grid[i][j] == 1) {
//                    grid[i][j] = 0;
//                    num = 0;
//                    dfs(grid, i, j);
//                    maxGridNum = max(maxGridNum, num);
//                }
//            }
//        }
//        return maxGridNum;
//    }
//};

/* DFS 栈版本 */
//class Solution {
//public:
//    int maxAreaOfIsland(vector<vector<int>>& grid) {
//        stack<pair<int, int>> pos_stack;
//        pair<int, int> pos;
//        int direction[5] = { 0, 1, 0, -1, 0 };
//        int maxGridNum = 0, num = 0;
//        int m = grid.size();
//        int n = grid[0].size();
//        int row, col, pos_i, pos_j;
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                // 遍历当前岛屿最大面积
//                if (grid[i][j] == 1) {
//                    grid[i][j] = 0;
//                    pos_stack.push({ i, j });
//                    num = 1;
//
//                    // 模拟函数调用
//                    while (pos_stack.size() > 0) {
//                        // 模拟传递参数
//                        pos = pos_stack.top();
//                        pos_stack.pop();
//                        pos_i = pos.first;
//                        pos_j = pos.second;
//
//                        // 四个方向
//                        for (int k = 0; k < 4; k++) {
//                            row = pos_i + direction[k];
//                            col = pos_j + direction[k + 1];
//                            if ((row < m) && (row >= 0) && (col < n) && (col >= 0)) {
//                                if (grid[row][col] == 1) {
//                                    grid[row][col] = 0;
//                                    pos_stack.push({ row, col });
//                                    num++;
//                                }
//                            }
//                        }
//                    }
//                    maxGridNum = max(maxGridNum, num);
//                }
//            }
//        }
//        return maxGridNum;
//    }
//};

/* BFS */
//class Solution {
//public:
//    int maxAreaOfIsland(vector<vector<int>>& grid) {
//        queue<pair<int, int>> pos_queue;
//        pair<int, int> pos;
//        int direction[5] = { 0, 1, 0, -1, 0 };
//        int maxGridNum = 0, num = 0;
//        int m = grid.size();
//        int n = grid[0].size();
//        int row, col, pos_i, pos_j;
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                // 遍历当前岛屿最大面积
//                if (grid[i][j] == 1) {
//                    grid[i][j] = 0;
//                    pos_queue.push({ i, j });
//                    num = 1;
//
//                    // 模拟函数调用
//                    while (pos_queue.size() > 0) {
//                        // 模拟传递参数
//                        pos = pos_queue.front();
//                        pos_queue.pop();
//                        pos_i = pos.first;
//                        pos_j = pos.second;
//
//                        // 四个方向
//                        for (int k = 0; k < 4; k++) {
//                            row = pos_i + direction[k];
//                            col = pos_j + direction[k + 1];
//                            if ((row < m) && (row >= 0) && (col < n) && (col >= 0)) {
//                                if (grid[row][col] == 1) {
//                                    grid[row][col] = 0;
//                                    pos_queue.push({ row, col });
//                                    num++;
//                                }
//                            }
//                        }
//                    }
//                    maxGridNum = max(maxGridNum, num);
//                }
//            }
//        }
//        return maxGridNum;
//    }
//};

int main() {
    vector<vector<int>> grid = {
        {0,0,0,0,0,0,0,0,1,0,1,0,0,0},
        {0,0,0,0,0,0,0,0,1,1,1,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,1,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,1,1,1,0,0,0},
        {0,0,0,0,0,0,0,0,1,1,1,0,0,0},
        {0,0,0,0,0,0,0,0,1,1,1,0,0,0},
    };
    Solution* solution = new Solution;
    cout << solution->maxAreaOfIsland(grid) << endl;

	return 0;
}