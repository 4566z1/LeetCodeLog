//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//class Solution {
//public:
//
//    int findKthLargest(vector<int>& nums, int k) {
//        priority_queue<int> pqueue;
//        
//        for (int i = 0; i < nums.size(); i++){
//            pqueue.push(nums[i]);
//            if (pqueue.size()-1 > k)
//                pqueue.pop();
//        }
//        return pqueue.top();
//    }
//};
//
//int main() {
//    vector<int> nums = { 3,2,3,1,2,4,5,5,6 };
//    Solution* solution = new Solution;
//    cout << solution->findKthLargest(nums, 4) << endl;
//
//	return 0;
//}