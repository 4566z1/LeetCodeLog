//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        if (x < 0)
//            return false;
//        long long num = x, reversedNum = 0;
//        do{
//            reversedNum = reversedNum * 10 + num % 10;
//            num /= 10;
//        } while (num);
//
//        if (reversedNum == x)
//            return true;
//        else
//            return false;
//    }
//};
//
//int main() {
//    Solution* solution = new Solution;
//    cout << solution->isPalindrome(12) << endl;
//	return 0;
//}