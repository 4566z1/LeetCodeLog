#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int length1 = nums1.size(), length2 = nums2.size(), result = 0;
        vector<vector<int>> dp(length1 + 1, vector<int>(length2 + 1));

        for (int i = 1; i <= length1; i++){
            for (int j = 1; j <= length2; j++){
                if (nums1[i - 1] == nums2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                result = max(result, dp[i][j]);
            }
        }
        return result;
    }
};

int main() {
    vector<int> nums1 = { 1,2,3,2,1 };
    vector<int> nums2 = { 3,2,1,4,7 };
    Solution* solution = new Solution;
    solution->findLength(nums1, nums2);
	return 0;
}