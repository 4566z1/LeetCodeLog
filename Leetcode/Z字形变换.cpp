//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//    string convert(string s, int numRows) {
//        if (numRows < 2)
//            return s;
//
//        int flag = -1;
//        string str = "";
//        vector<string> strbuf(numRows);
//        for (int i = 0, j = 0; i < s.size(); i++, j += flag){
//            strbuf[j].push_back(s[i]);
//            if (j == 0 || j == numRows - 1)
//                flag = -flag;
//        }
//
//        for (auto s : strbuf) {
//            str.append(s);
//        }
//        return str;
//    }
//};
//
//int main() {
//    Solution* solution = new Solution;
//    cout << solution->convert("AB", 1) << endl;
//    return 0;
//}