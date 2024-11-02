#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> addresses;

    void findAddress(string& str, int begin){

    }

    vector<string> restoreIpAddresses(string s) {
        findAddress(s, 0);
        return addresses;
    }
};

int main() {
    Solution* solution = new Solution;
    solution->restoreIpAddresses("25525511135");
    return 0;
}