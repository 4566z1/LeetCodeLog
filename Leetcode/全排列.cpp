//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> copied_nums;
//    int length;
//    int* HashMap;
//    vector<int> buffer;
//    vector<vector<int>> buffers;
//
//    void dfs(int depth){
//        if (depth == length) {
//            buffers.push_back(buffer);
//            return;
//        }
//
//        for (int i = 0; i < length; i++){
//            if (!HashMap[i]) {
//                buffer.push_back(copied_nums[i]);
//                HashMap[i] = 1;
//                dfs(depth + 1);
//                HashMap[i] = 0;
//                buffer.pop_back();
//            }
//        }
//    }
//
//    vector<vector<int>> permute(vector<int>& nums) {
//        // ≥ı ºªØ
//        copied_nums = nums;
//        length = nums.size();
//        HashMap = new int[length];
//        for (int i = 0; i < length; i++){
//            HashMap[i] = 0;
//        }
//
//        dfs(0);
//        return buffers;
//    }
//};
//
//int paimain() {
//    vector<int>nums = { 1,2,3 };
//    Solution* solution = new Solution();
//    solution->permute(nums);
//	return 0;
//}