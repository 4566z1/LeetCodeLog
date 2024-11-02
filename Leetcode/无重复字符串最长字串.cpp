//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        int min_len = 0;
//        int left = 0;
//        unordered_set<char>hashmap;
//        for (int i = 0; i < s.size(); i++) {
//            while (hashmap.find(s[i]) != hashmap.end()) {
//                hashmap.erase(s[left]);
//                left++;
//            }
//            hashmap.insert(s[i]);
//            if (hashmap.size() > min_len) {
//                min_len = hashmap.size();
//            }
//        }
//        return min_len;
//    }
//};
//
//int unsamestrmain() {
//    Solution* solution = new Solution;
//    solution->lengthOfLongestSubstring("jihj");
//    return 0;
//}