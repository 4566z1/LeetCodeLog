//#include <vector>
//#include <random>
//#include <ctime>
//#include <stack>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int findKthLargest(vector<int>& nums, int k) {
//        random_shuffle(nums.begin(), nums.end());
//        int target = nums.size() - k;
//        int left = 0, right = nums.size() - 1;
//        int l, r, standard;
//
//        while (true) {
//            l = left;
//            r = right;
//
//            // Patition»®·Ö
//            standard = nums[left];
//            while (l < r) {
//                while (l < r && standard <= nums[r]) {
//                    r--;
//                }
//                while (l < r && standard >= nums[l]) {
//                    l++;
//                }
//                swap(nums[l], nums[r]);
//            }
//            swap(nums[left], nums[r]);
//            standard = r;
//
//            if (target == standard) {
//                return nums[standard];
//            }
//            else if (target > standard) {
//                left = standard + 1;
//            }
//            else {
//                right = standard - 1;
//            }
//        }
//        return 0;
//    }
//};
//
//int main() {
//    vector<int> list = { 3,2,3,1,2,4,5,5,6 };
//    Solution* solution = new Solution();
//    solution->findKthLargest(list, 4);
//	return 0;
//}