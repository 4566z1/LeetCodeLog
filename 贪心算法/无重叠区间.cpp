//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//        sort(intervals.begin(), intervals.end(), [](vector<int> &vector1,vector<int> &vector2) {
//            return vector1[1] < vector2[1];
//        });
//
//        int total = 0;
//        int prev = intervals[0][1];
//        for (int i = 1; i < intervals.size(); i++){
//            if (intervals[i][0] < prev) {
//                total++;
//            }else{
//                prev = intervals[i][1];
//            }
//        }
//        return total;
//    }
//};
//
//int main() {
//    vector<vector<int>> intervals = {
//        {1,2},
//        {1,2},
//        {1,2},
//    };
//
//    Solution* solution = new Solution;
//    solution->eraseOverlapIntervals(intervals);
//	return 0;
//}