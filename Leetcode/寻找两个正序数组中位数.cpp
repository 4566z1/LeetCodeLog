//#include <set>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	double findMedianSortedArrays(vector<int> nums1, vector<int> nums2) {
//		vector<int> nums;
//		int nums1_length = nums1.size();
//		int nums2_length = nums2.size();
//		int length = nums1_length > nums2_length ? nums1_length : nums2_length;
//		for (int i = 0; i < length; i++){
//			if (i < nums1_length)
//				nums.push_back(nums1[i]);
//			if (i < nums2_length)
//				nums.push_back(nums2[i]);
//		}
//		sort(nums.begin(), nums.end());
//
//		int pad = nums1_length + nums2_length;
//		if (pad % 2) {
//			return nums[(pad + 1) / 2 - 1];
//		}
//		else {
//			return (1.0*nums[pad / 2 - 1] + nums[pad / 2]) / 2;
//		}
//		return 2;
//	}
//};
//
//int averagemain() {
//	Solution *solution = new Solution;
//	solution->findMedianSortedArrays({ 1,2 }, { 3,4 });
//	return 0;
//}