//#include <iostream>
//#include <queue>
//using namespace std;
//
//class Solution {
//public:
//    int reverse(int x) {
//        int num = 0;
//        int reverse = 0;
//        do
//        {
//            if (reverse < INT_MIN / 10 || reverse > INT_MAX / 10) {
//                return 0;
//            }
//            num = x % 10;
//            reverse = reverse * 10 + num;
//        } while (x /= 10);
//        return reverse;
//    }
//};
//
//int main() {
//    Solution* solution = new Solution();
//    solution->reverse(-2147483648);
//
//    return 0;
//}