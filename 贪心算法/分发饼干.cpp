//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int findContentChildren(vector<int>& g, vector<int>& s) {
//		int child = 0, cookie = 0;
//		sort(g.begin(), g.end());
//		sort(s.begin(), s.end());
//		while (child < g.size() && cookie < s.size()){
//			if (g[child] <= s[cookie]) { ++child; }
//			++cookie;
//		}
//
//		return child;
//    }
//};
//
//int main() {
//	vector<int> g = { 10,9,8,7 };
//	vector<int> s = { 5,6,7,8 };
//	Solution* solution = new Solution;
//	cout << solution->findContentChildren(g, s) << endl;
//	return 0;
//}