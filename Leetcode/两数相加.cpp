//#include <iostream>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//
//class Solution{
//public:
//    ListNode * addTwoNumbers(ListNode * l1, ListNode * l2) {
//        int carry = 0, num = 0;
//        ListNode* buffer = new ListNode;
//        ListNode* p = buffer;
//        while(l1 || l2){
//            num += l1 != nullptr ? l1->val : 0;
//            num += l2 != nullptr ? l2->val : 0;
//            num += carry != 0 ? carry : 0;
//
//            carry = num /10;
//            p->val = num % 10;
//            
//            if (l1) { l1 = l1->next; }
//            if (l2) { l2 = l2->next; }
//
//            if (l1 || l2) {
//                p->next = new ListNode;
//                p = p->next;
//            }
//            num = 0;
//        }
//
//        if (carry == 1) {
//            p->next = new ListNode;
//            p->next->val = carry;
//        }
//        return buffer;
//    }
//};
//
//void setListNode(ListNode * src, initializer_list<int> args) {
//    ListNode* p = src;
//    for (initializer_list<int>::iterator i = args.begin(); i < args.end();i++) {
//        p->val = *i;
//        
//        // ÒÆ¶¯Ö¸Õë
//        if(i != args.end() - 1)
//            p->next = new ListNode;
//            p = p->next;
//    }
//}
//
//int _main() {
//    ListNode* num1 = new ListNode;
//    ListNode* num2 = new ListNode;
//    setListNode(num1, { 9,9,9,9,9,9,9 });
//    setListNode(num2, { 9,9,9,9 });
//
//    Solution* solution = new Solution();
//    
//    solution->addTwoNumbers(num1, num2);
//	return 0;
//}