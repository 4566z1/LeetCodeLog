#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

void quick_sort(vector<int>& list, int l, int r) {
	stack<pair<int, int >> func_stack;
	if (l >= r)
		return;
	int length = list.size();
	int standard = list[l];
	int left = l, right = r - 1;
	while (left < right) {
		while (left < right && standard <= list[right]) {
			right--;
		}
		while (left < right && standard >= list[left]) {
			left++;
		}
		swap(list[left], list[right]);
	}
	swap(list[l], list[right]);
	func_stack.push({ l ,left });
	quick_sort(list, l, left);
	quick_sort(list, left + 1, r);
}

int main() {
	vector<int> list = { 7,8,5,6,1,3,5,4,7,9 };
	quick_sort(list, 0, list.size());
	return 0;
}