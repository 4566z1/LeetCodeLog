//#include <iostream>
//using namespace std;
//
//class Solution {
//private: 
//public:
//    int mySqrt(int a) {
//        long x = a;
//        while (x * x > a) {
//            x = (x + a / x) / 2;
//        }
//        return x;
//    }
//};
//
//int main() {
//    Solution *solution = new Solution;
//    int result;
//    int realResult;
//    for (int i = 0; i < 1000; i++){
//        result = solution->mySqrt(i);
//        realResult = sqrt(i);
//        if (result != realResult){
//            cout << i << endl;
//            return 0;
//        }
//    }
//    cout << "finished" << endl;
//	return 0;
//}