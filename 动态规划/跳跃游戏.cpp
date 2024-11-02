//#include <iostream>
//#include <vector>
//using namespace std;
//
///* Ì°ÐÄËã·¨ */
////class Solution {
////public:
////    bool canJump(vector<int>& nums) {
////        int max_length = 0;
////
////        for (int i = 0; i < nums.size() - 1; i++) {
////            max_length = max_length > i + nums[i] ? max_length : i + nums[i];
////
////            if (nums[i] == 0 && i >= max_length) {
////                return false;
////            }
////        }
////        return true;
////    }
////};
//
//class Solution {
//public:
//    bool canJump(vector<int>& nums) {
//        int length = nums.size();
//        vector<int> dp(length);
//        
//        for (int i = 0; i < length; i++){
//            
//        }
//        return true;
//    }
//};
//int main() {
//    vector<int> nums = { 3,2,1,0,4 };
//    Solution* solution = new Solution();
//    cout << solution->canJump(nums) << endl;
//    return 0;
//
//}