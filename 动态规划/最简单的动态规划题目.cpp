//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int returnNfunction(int n) {
//	int* dp = new int[n];
//	for (int i = 0; i < n; i++){
//		if (i == 0) { dp[i] = 1; }
//		else if (i == 1) { dp[i] = 2; }
//		else { dp[i] = dp[i - 1] + dp[i - 2]; }
//	}
//	return dp[n - 1];
//}
//
//int main() {
//	for (int i = 1; i <= 50; i++){
//		cout << returnNfunction(i) << endl;
//	}
//	return 0;
//}