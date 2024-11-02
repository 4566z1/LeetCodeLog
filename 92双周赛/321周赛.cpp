//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <numeric>
//using namespace std;
//
////class Solution {
////public:
////
////    int getSum(int &n, int& x, bool isFront) {
////        int sum = 0;
////        if (isFront) {
////            for (int i = 1; i <= x; i++) { sum += i; }
////        }
////        else {
////            for (int i = n; i >= x; i--) { sum += i; }
////        }
////        return sum;
////    }
////
////    int pivotInteger(int n) {
////        //unordered_map<int, int> hashMap();
////
////        for (int i = 1; i <= n; i++){
////            if (getSum(n, i, 1) == getSum(n, i, 0)) {
////                return i;
////            }
////        }
////        return -1;
////    }
////};
//
////class Solution {
////public:
////    int appendCharacters(string s, string t) {
////
////    }
////};
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//class Solution {
//public:
//    bool findBigger(ListNode *src, ListNode* p) {
//        if (p) {
//            if (p->val > src->val)
//                return true;
//
//            if (findBigger(src, p->next))
//                return true;
//        }
//        return false;
//    }
//
//    ListNode* removeNodes(ListNode* head) {
//        ListNode* p = head;
//        ListNode* pre = head;
//        while (p) {
//            if (findBigger(p, p)) {
//                if (p->next)
//                    *p = *(p->next);
//                else
//                    pre->next = nullptr;
//            }
//            pre = p;
//            p = p->next;
//        }
//        return head;
//    }
//};
//
//int main() {
//    Solution* solution = new Solution;
//    solution->removeNodes();
//	return 0;
//}