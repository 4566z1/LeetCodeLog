//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> applyOperations(vector<int> nums) {
//		vector<int> saved;
//		int length = nums.size();
//		for (int i = 0; i < length - 1; i++){
//			if (nums[i] == nums[i + 1]) {
//				nums[i] *= 2;
//				nums[i + 1] = 0;
//			}
//		}
//
//		for (auto num : nums){
//			if (num != 0) {
//				saved.push_back(num);
//			}
//		}
//		for (auto num : nums) {
//			if (num == 0) {
//				saved.push_back(num);
//			}
//		}
//		return saved;
//    }
//};
//
//int main() {
//	Solution* solution = new Solution;
//	solution->applyOperations({ 0,0,0,0,0,1 });
//
//	return 0;
//}