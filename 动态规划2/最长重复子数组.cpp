#include <vector>
using namespace std;

class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int maxLength = 0;
        for (int i = 0; i < nums1.size(); i++){
            int len = 0;
            for (int j = 0, k = i; j < nums2.size() && k < nums2.size(); j++){
                if (nums1[k] == nums2[j]) {
                    k++;
                    len++;
                }
                else {
                    len = 0;
                }
                maxLength = max(maxLength, len);
            }

        }
        return maxLength;
    }
};

int main() {
    vector<int> nums1 = { 0,0,0,0,0,0,1,0,0,0 };
    vector<int> nums2 = { 0,0,0,0,0,0,0,1,0,0 };
    Solution* solution = new Solution;
    solution->findLength(nums1, nums2);
	return 0;
}