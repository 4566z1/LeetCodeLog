//#include <vector>
//#include <iostream>
//#include <numeric>
//using namespace std;
//
//class Solution {
//public:
//    int candy(vector<int>& ratings) {
//		int candysTotal = 0;
//		int length = ratings.size();
//		vector <int> candys(length, 1);
//
//		for (int i = 1; i < length; i++){
//			if (ratings[i] > ratings[i - 1]) {
//				candys[i] = candys[i - 1] + 1;
//			}
//		}
//		for (int i = length - 1; i > 0; i--) {
//			if (ratings[i - 1] > ratings[i] && candys[i - 1] <= candys[i]) {
//				candys[i - 1] = max(candys[i - 1], candys[i] + 1);
//			}
//		}
//		return accumulate(candys.begin(), candys.end(), 0);
//    }
//};
//
//
//int main() {
//	vector<int> candys = { 5,2,1,3,5,6,7,8,1,0,2,5,3,4,4 };
//	Solution* solution = new Solution;
//	cout << solution->candy(candys) << endl;
//	return 0;
//}