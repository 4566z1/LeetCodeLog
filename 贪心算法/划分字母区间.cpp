//#include <vector>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> partitionLabels(string s) {
//        vector<int> wordEnd(26, -1); vector<int> duration;
//        int curWordBegin = 0, curWordEnd = 0;
//        int length = s.size();
//
//        // ‘§¥¶¿Ì
//        for (int i = 0; i < length; i++) { wordEnd[s[i] - 97] = i; }
//
//        for (int i = 0; i < length; i++){
//            curWordEnd = max(curWordEnd, wordEnd[s[i] - 97]);
//            if(i == curWordEnd) {
//                duration.push_back(curWordEnd - curWordBegin + 1);
//                if (i != length - 1) {
//                    curWordBegin = i + 1;
//                    curWordEnd = wordEnd[s[i + 1] - 97];
//                }
//            }
//        }
//        return duration;
//    }
//};
//
//int main() {
//    Solution* solution = new Solution();
//    solution->partitionLabels("caedbdedda");
//    return 0;
//}