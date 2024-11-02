#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int maxPalindromes(string s, int k) {
        vector<string> saveStr;
        int length = s.length();
        int hits = 0;
        for (int i = 0; i < length; i++) {
            int left = i - 1;
            int right = i + 1;
            int cur_length = 1;
            while (left >= 0 && s.at(left) == s.at(i)) {
                left--;
                cur_length++;
            }
            while (right < length && s.at(right) == s.at(i)) {
                right++;
                cur_length++;
            }
            while (left >= 0 && right < length && s.at(right) == s.at(left)) {
                right++;
                left--;
                cur_length += 2;
            }

            if (cur_length >= k) {
                int flag = 0;
                string result = s.substr(left + 1, cur_length);
                for (auto str : saveStr){
                    if (str.find(result) != str.npos || result.find(str) != result.npos) {
                        flag = 1;
                        break;
                    }
                }
                if(!flag)
                    saveStr.push_back(result);
            }
        }
        return saveStr.size();
    }
};

int main() {
    Solution *solution = new Solution();
    cout << solution->maxPalindromes("iqqibcecvrbxxj", 1) << endl;
    return 0;
}