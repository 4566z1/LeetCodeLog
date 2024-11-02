//#include <vector>
//#include <unordered_set>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int distinctAverages(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//		unordered_set<float> hashmap;
//		int maxNum, minNum;
//		float average;
//		int num = 0;
//
//		while (nums.size() > 0) {
//			maxNum = nums.back();
//			nums.erase(nums.end() - 1);
//			minNum = nums.front();
//			nums.erase(nums.begin());
//
//			average = (1.0 * maxNum + minNum) / 2;
//			if (hashmap.find(average) == hashmap.end()) {
//				hashmap.insert(average);
//				num++;
//			}
//		}
//		return num;
//    }
//};
//
//
//int main() {
//	vector<int> nums = { 1,100 };
//	Solution* solution = new Solution;
//	solution->distinctAverages(nums);
//	return 0;
//}