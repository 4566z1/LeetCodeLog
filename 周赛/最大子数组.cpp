#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
	long long maximumSubarraySum(vector<int> nums, int k) {
		unordered_map<int, int> counts;
		long long maxSum = 0, sum = 0;
		int left = 0, length = nums.size();

		if (length < k)
			return 0;

		for (int i = 0; i < k; i++){
			counts.emplace(nums[i], 0);
			counts[nums[i]]++;
			sum += nums[i];
		}

		if (length == k && counts.size() == k)
			return sum;
		else if(counts.size() == k)
			maxSum = max(sum, maxSum);

		for (int right = k; right < length; right++, left++) {
			// ×óÔªËØ
			counts[nums[left]]--;
			if (counts[nums[left]] == 0)
				counts.erase(nums[left]);
			sum -= nums[left];

			// ÓÒÔªËØ
			counts[nums[right]]++;
			sum += nums[right];

			if (counts.size() == k){
				maxSum = max(sum, maxSum);
			}
		}
		return maxSum;
	}
};

int main() {
	Solution* solution = new Solution;
	cout << solution->maximumSubarraySum({ 1,2 }, 3) << endl;

	return 0;
}