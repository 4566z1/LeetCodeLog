//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <numeric>
//using namespace std;
//
////class Solution {
////public:
////    int numberOfCuts(int n) {
////        if (n == 1)
////            return 1;
////        else
////            return n % 2 == 0 ? n / 2 : n;
////    }
////};
//
////class Solution {
////public:
////    unordered_map<int, int> hashMap;
////
////    int find(vector<vector<int>>& grid, int index, bool find_direction) {
////        int key = index * 10 + find_direction;
////        if (hashMap[key]) {
////            return hashMap[key];
////        }
////
////        int num = 0;
////        if (!find_direction) {
////            // 行
////            for (int i = 0; i < grid[index].size(); i++){
////                if (grid[index][i] == 1) {
////                    num++;
////                }
////                else {
////                    num--;
////                }
////            }
////        }
////        else {
////            // 列
////            for (int i = 0; i < grid.size(); i++) {
////                if (grid[i][index] == 1) {
////                    num++;
////                }
////                else {
////                    num--;
////                }
////            }
////        }
////
////        hashMap[key] = num;
////        return num;
////    }
////
////    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
////        int width = grid[0].size();
////        int height = grid.size();
////        vector<vector<int>> diff(height, vector<int>(width, 0));
////
////        for (int i = 0; i < height; i++){
////            for (int j = 0; j < width; j++){
////                diff[i][j] = find(grid, i, false) + find(grid, j, true);
////            }
////        }
////        return diff;
////    }
////};
//
////class Solution {
////public:
////    int bestClosingTime(string customers) {
////        int length = customers.size();
////        int minIndex = 0, cost = 0;
////        int minCost = 0;
////
////        // 预处理
////        for (int i = 0; i < length; i++) {
////            if (customers[i] == 'Y')
////                cost++;
////        }
////        if (!cost)
////            return 0;
////        else
////            minCost = cost;
////
////        for (int j = 1; j <= length; j++){
////            if (customers[j - 1] == 'Y')
////                cost--;
////            else
////                cost++;
////
////            if (cost < minCost) {
////                minCost = cost;
////                minIndex = j;
////            }
////        }
////        return minIndex;
////    }
////};
//
//class Solution {
//public:
//    vector<string> saved_string;
//    string subString;
//
//    void dfs(string& str, int index) {
//        if (index < str.size()) {
//            if (subString.size() == 5) {
//                saved_string.push_back(subString);
//            }
//            else {
//                for (int i = 0; i < str.size(); i++){
//                    subString.push_back(str[index]);
//                    dfs(str, index + i);
//                    str.pop_back();
//                }   
//            }
//            return;
//        }
//    }
//
//    int countPalindromes(string s) {
//        dfs(s, 0);
//        return 0;
//    }
//};
//
//int main() {
//    Solution* solution = new Solution;
//    solution->countPalindromes("103301");
//	return 0;
//}