#include <vector>
#include <string>
#include <stack>
using namespace std;

// ¶¯Ì¬¹æ»®
class Solution {
public:
	int countGoodStrings(int low, int high, int zero, int one) {
		int ans = 0;
		const int mod = 1e9 + 7;
		vector<int> dp(high + 1, 0);

		dp[0] = 1;
		for (int i = 1; i <= high; i++){
			if (i >= one) {
				dp[i] = (dp[i] + dp[i - one]) % mod;
			}
			if (i >= zero) {
				dp[i] = (dp[i] + dp[i - zero]) % mod;
			}
			if (i >= low)
				ans = (ans + dp[i]) % mod;
		}
		return ans % mod;
	}
};

int main() {
	Solution* solution = new Solution;
	solution->countGoodStrings(1, 10000, 10, 1);
	return 0;
}