//#include <iostream>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//    string longestPalindrome(string s) {
//        int left_index = 0, right_index = 0;
//        int length = s.length();
//        int str_length = 0;
//        for (int i = 0; i < length; i++) {
//            int left = i - 1;
//            int right = i + 1;
//            int cur_length = 1;
//            while (left >= 0 && s.at(left) == s.at(i)) {
//                left--;
//                cur_length++;
//            }
//            while (right < length && s.at(right) == s.at(i)) {
//                right++;
//                cur_length++;
//            }
//            while (left >= 0 && right < length && s.at(right) == s.at(left)) {
//                right++;
//                left--;
//                cur_length += 2;
//            }
//
//            if (cur_length > str_length) {
//                str_length = cur_length;
//                left_index = left;
//            }
//        }
//        return s.substr(left_index + 1, str_length);
//    }
//};
//
//int main() {
//    Solution *solution = new Solution();
//    cout << solution->longestPalindrome("dlkflsdajlfkdd") << endl;
//    return 0;
//}